clear;

iter=1000;
% Adaptive Control Parameters
a12_hat = zeros(1, iter); % Define a12
a21_hat = zeros(1, iter); % Define a21
b1_hat = zeros(1, iter); % Define b1
b2_hat = zeros(1, iter); % Define b2
e = zeros(2, iter);
P = eye(2); % Define P with correct size
y=zeros(3,iter);

% Initial conditions
x_p = zeros(2, iter); % State of system 1
x_m = zeros(2, iter); % State of system 1
x_p(:, 1) = [0;0]; % State of system 1
x_m(:, 1) = [0;0]; % State of system 1

% Set initial conditions for x_p and x_m
F = zeros(2, 3, iter); % Initialize F with correct size
theta = zeros(2, 3, iter);
% Initialize variables for error plotting


u=1;
lambda=1;
A = [0.5, -0.0449 ; -0.0445, 0.5];
B = [-0.2813;-0.3647];

% Simulation
for k = 2:iter-1
   
    A_hat=[0.5, a12_hat(k); a21_hat(k), 0.5];
    B_hat =[b1_hat(k); b2_hat(k)];
    if k==2
        theta(:,:, k) = [A_hat-A,B_hat-B];
    end
    % System matrices for system 
    
    y(:,k-1)= [x_p(1, k-1); x_p(2, k-1); u]; % Correct indexing
    
    % System 1 dynamics
    x_p(:, k) = A * x_p(:, k-1) + B * u;
    x_m(:, k) = A_hat * x_p(:, k-1) + B_hat * u;
    
    % Parameter error
    e(:, k) = x_m(:, k) - x_p(:, k);

    % Update parameter estimate
    F(:,:, k) = (1.5*P*e(:, k)* y(:,k-1)')/(lambda*y(:, k-1)' * y(:, k-1));

    %F_k = squeeze(F(:, :, k+1));
    theta(:,:, k+1) = theta(:,:, k)- F(:,:, k);

    a12_hat(k+1)=theta(1,2,k+1);
    a21_hat(k+1)=theta(2,1,k+1);
    b1_hat(k+1)=theta(1,3,k+1);
    b2_hat(k+1)=theta(2,3,k+1);
end
a12_hat(iter),a21_hat(iter),b1_hat(iter),b2_hat(iter)
%% Plotting the errors
figure;
subplot(2, 2, 1);
plot(1:iter, a12_hat(:), 'r', 'LineWidth', 2);
title('a12');
xlabel('Iteration');
ylabel('a12');

subplot(2, 2, 2);
plot(1:iter, a21_hat(:), 'b', 'LineWidth', 2);
title('a21');
xlabel('Iteration');
ylabel('a21');

subplot(2, 2, 3);
plot(1:iter, b1_hat(:), 'r', 'LineWidth', 2);
title('b1');
xlabel('Iteration');
ylabel('b1');

subplot(2, 2, 4);
plot(1:iter, b2_hat( :), 'b', 'LineWidth', 2);
title('b2');
xlabel('Iteration');
ylabel('b2');