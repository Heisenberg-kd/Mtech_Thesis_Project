clear ;
clc;
iter=60;

% Adaptive Control Parameters
c1_hat = zeros(1, iter); % Define c1
c2_hat = zeros(1, iter); % Define c2
ec1=zeros(1, iter);
ec2=zeros(1, iter);
e = zeros(2, iter);
P = eye(2); % Define P with correct size
y=zeros(4,iter);

C_hat=zeros(2,4,iter);

% Initial conditions
x_p = zeros(2,iter); % State of system 1
x_m = zeros(2,iter); % State of system 1

x_p(:, 1) = [1;2]; % State of system 1
x_m(:, 1) = [0;0]; % State of system 1

% Set initial conditions for x_p and x_m
F = zeros(2, 4, iter); % Initialize F with correct size
theta = zeros(2, 3, iter);
phi=zeros(2,3,iter);


%syms('a21','a12','b1','b2');
u=1; 
lambda=1;
ec1(2)=0;
ec2(2)=0;

A=[0.5,0.1;0.1,0.5];
% Simulation
for k = 2:iter-1

    C=[0.5,0.1,0.5,0;0.1,0.5,0,0.1];
    if k==2
       C_hat(:,:,k)= [0.5,0.1,0, c1_hat(k); 0.1,0.5,0,c2_hat(k)];
    end
    % System matrices for system 
    
    y(:,k-1)= [x_p(1, k-1); x_p(2, k-1); cos(x_p(2,k-1))*u;x_p(1,k-1)^3*u]; % Correct indexing
    
    % System 1 dynamics
    U=[cos(x_p(2,k-1))*u;x_p(1,k-1)^3*u];
    x_p(:, k) = C * y(:,k-1);
    x_m(:, k) = C_hat(:,:,k)* y(:,k-1);
    
    % Parameter error
    e(:, k) = x_m(:, k) - x_p(:, k);

    % Update parameter estimate
    F(:,:, k) = (1.5*P*e(:, k)* y(:,k-1)')/(lambda*y(:, k-1)' * y(:, k-1));

    %F_k = squeeze(F(:, :, k+1));
    C_hat(:,:, k+1) = C_hat(:,:, k)- F(:,:, k);
    
    c1_hat(k+1)=C_hat(1,3,k+1);
    c2_hat(k+1)=C_hat(2,4,k+1);

    % C_hat(1,1,k+1)=0.5;
    % C_hat(2,1,k+1)=0.1;
    % C_hat(1,2,k+1)=0.1;
    % C_hat(2,2,k+1)=0.5;
end

C_hat
%% Plotting the errors
figure;
subplot(2, 1, 1);
plot(1:iter, c1_hat(:), 'r', 'LineWidth', 2);
title('c1');
xlabel('Iteration');
ylabel('c1');

subplot(2, 1, 2);
plot(1:iter, c2_hat(:), 'b', 'LineWidth', 2);
title('c2');
xlabel('Iteration');
ylabel('c2');
