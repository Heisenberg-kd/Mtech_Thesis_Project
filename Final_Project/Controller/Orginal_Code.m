clc;
clear all;

% Define the matrices and parameters
x1 = 5; % Initialize x1
x2 = 4; % Initialize x2
x = [x1; x2];

A = [1, 2; 2, 2];
D = [1; 2];
H = [1, 0];
F = -1.5;
gaama = 0.8;
c = 1.2;
d = 0.5;
P0 = eye(2);
P = eye(2);
P1 = [D' * P * D, 0; 0, 0];
P2 = 0;
q1 = [2 * x' * A * P * D; -1];
q2 = [-H * D; 0];
r1 = x' * (A' * P * A - P + c * eye(size(A))) * x;
r2 = -H * (A + (1 - gaama) * eye(size(A))) * x - (2 - gaama) * F;


% Use CVX to solve the optimization problem
cvx_begin
    variable Uk(size(D))  % Optimization variable
    minimize(Uk' * P0 * Uk)  % Objective function

    % Inequality constraints
    Uk' * P1 * Uk + q1'*Uk + r1 <= 0;
    Uk' * P2 * Uk + q2'*Uk + r2 <= 0;
cvx_end

% Display results
disp('Optimization successful');
disp('Optimal control input:');
disp(Uk);
disp('Optimal objective value:');
disp(cvx_optval);

% Simulate the trajectory of x using the optimal control input
num_steps = 10; % Number of time steps
x_trajectory = zeros(length(x), num_steps + 1);
u_trajectory = zeros(length(Uk), num_steps);
x_trajectory(:, 1) = x;

for i = 1:num_steps
    disp(['Iteration: ' num2str(i)]);
    %%disp(['Current Uk: ' mat2str(Uk)]);
     u_k = Uk(1);
     d = Uk(2);
     u_trajectory(:, i) = [u_k; d];  % Store the control input
    x = A * x + D * u_k; % Use [u_k; d] instead of Uk
    
    cvx_begin
    variable Uk(size(D))  % Optimization variable
    minimize(Uk' * P0 * Uk)  % Objective function

    % Inequality constraints
    Uk' * P1 * Uk + q1'*Uk + r1 <= 0;
    Uk' * P2 * Uk + q2'*Uk + r2 <= 0;
    cvx_end

    x_trajectory(:, i + 1) = x;
    
end

% Plot the trajectory of x
figure;
subplot(1, 2, 1);
plot(0:num_steps, x_trajectory', '-o');
xlabel('Time Step');
ylabel('State Variable');
legend('x1', 'x2');
title('Trajectory of State Variables x1 and x2');

% Plot the phase plot
subplot(1, 2, 2);
plot(x_trajectory(1, :), x_trajectory(2, :), '-o');
xlabel('x1');
ylabel('x2');
title('Phase Plot');
