clear;
clc;
iter=30;
% Adaptive Control Parameters
a12_hat = zeros(1, iter); % Define a12
a21_hat = zeros(1, iter); % Define a21
b1_hat = zeros(1, iter); % Define b1
b2_hat = zeros(1, iter); % Define b2
ea12=zeros(1, iter);
ea21=zeros(1, iter);
eb1=zeros(1, iter);
eb2=zeros(1, iter);
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

%syms('a21','a12','b1','b2');
u=1; 
lambda=1;
ea12(2)=0.1;
ea21(2)=0.2;
eb1(2)=0.3;
eb2(2)=0.4;


% Simulation
for k = 2:iter-1
    A_hat= [0.5, a12_hat(k); a21_hat(k), 0.5];
    B_hat= [b1_hat(k); b2_hat(k)];

    %ea12=a12_hat-a12 => a12=a12_hat-ea12;
    A = [0.5, a12_hat(k)-ea12(k); a21_hat(k)-ea21(k), 0.5];
    B = [b1_hat(k)-eb1(k);b2_hat(k)-eb2(k)];

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

    temp=[A_hat,B_hat]-F(:,:,k);

    % ea12(k+1)=theta(1,2,k+1);
    % ea21(k+1)=theta(2,1,k+1);
    % eb1(k+1)=theta(1,3,k+1);
    % eb2(k+1)=theta(2,3,k+1);

    a12_hat(k+1)=theta(1,2,k+1);
    a21_hat(k+1)=theta(2,1,k+1);
    b1_hat(k+1)=theta(1,3,k+1);
    b2_hat(k+1)=theta(2,3,k+1);

    ea12(k+1) = a12_hat(k+1);
    ea21(k+1) = a21_hat(k+1);
    eb1(k+1) = b1_hat(k+1);
    eb2(k+1) = b2_hat(k+1);

    % a12_hat(k+1)=temp(1,2);
    % a21_hat(k+1)=temp(2,1);
    % b1_hat(k+1)=temp(1,3);
    % b2_hat(k+1)=temp(2,3);

    % ea12(k+1)=temp(1,2);
    % ea21(k+1)=temp(2,1);
    % eb1(k+1)=temp(1,3);
    % eb2(k+1)=temp(2,3);
end

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