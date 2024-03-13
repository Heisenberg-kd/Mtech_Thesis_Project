clear;
clc;

%% Parameters
N=40;
p=3; % Size of Q and C matrices

% Intialization
x=zeros(p,N);
x_hat = zeros(p, N);
theta_hat = zeros(p, N);
theta_tilde=zeros(p,N);
omega = zeros(p,p, N);
e = zeros(p, N);
eta = zeros(p, N);
Q = zeros(p, p, N);
C = zeros(p, N);
K = 1;  % Correction factor

% Intial Conditions
x_hat(:,1) = [1;2;3];  % True state
u=[-0.1 ; 0.1 ; 0.2];
A=[-0.01 ; 0; -0.01]';
e(1)=0.4;
eta(1)=e(1);
theta=[1.5 , 3 , 0.02]';

%% Simulation
for k=1:N-1
    F=[u(3) ; 0.01*x(3,k)*u(1) ; u(2)];
    G=[x(3,k) , 0 , 0 ; 0 , -x(1,k) , 0 ; 0 , 0 , x(2,k)];
    x(:,k+1)=A*x(:,k) + F + G*theta;
end

for k = 1:N
    F=[u(3) ; 0.01*x(3,k)*u(1) ; u(2)];
    G=[x(3,k) , 0 , 0 ; 0 , -x(1,k) , 0 ; 0 , 0 , x(2,k)];
    
    % Output filter update (Equation 3)
    omega(:,:, k+1) = omega(:,:, k) + G - K * omega(:,:, k);

    % State predictor (Equation 2)
    x_hat(:, k+1) = A*x_hat(:, k) + F + G * theta_hat(:, k+1) ...
                    + K * e(:, k) - omega(:,:, k) * (theta_hat(:, k) - theta_hat(:,k+1)) ...
                    + K * omega(:,:, k) * (theta_hat(:, k) - theta_hat(:,k+1));

    % State estimation error
    e(:, k+1) = x_hat(:,k+1)-x(:,k+1);

    % Update law (Equation 6)
    eta(:, k+1) = eta(:, k) - K * eta(:, k);

    % Auxiliary variable (Equation 5)
    theta_tilde(:,k+1) = (e(:, k+1) - eta(:, k+1))\omega(:,:, k+1);

    theta_hat(:,k+1) = theta - theta_tilde(:, k+1);
    % Matrices Q and C update (Equations 7 and 8)
    Q(:, :, k+1) = Q(:, :, k) + omega(:,:, k)' * omega(:,:, k);
    C(:, k+1) = C(:, k) + omega(:,:, k)' * (omega(:,:, k) * theta_hat(:, k) + e(:, k) - eta(:, k));

    % Check if Q_N is invertible (Equation 9)
    Q_N = Q(:, :, k+1);
    if det(Q_N)~=0
        % Parameter calculation using Lemma 3.1 (Equation 11)
        theta_estimate = Q_N \ C(:,k+1);
        disp('Estimated Parameters:');
        disp(theta_estimate);
        
        figure;
        subplot(3, 1, 1);
        plot(1:N, theta_hat(1,:), 'r', 'LineWidth', 2);
        title('theta1');
        xlabel('Iteration');
        ylabel('theta1');
        
        subplot(3, 1, 2);
        plot(1:N, theta_hat(2,:), 'b', 'LineWidth', 2);
        title('theta2');
        xlabel('Iteration');
        ylabel('theta2');
        
        subplot(3, 1, 3);
        plot(1:N, theta_hat(3,:), 'r', 'LineWidth', 2);
        title('theta3');
        xlabel('Iteration');
        ylabel('theta3');

        break;
    end
end

if k==N
disp('Q_N is not invertible. Cannot calculate parameters.');
end