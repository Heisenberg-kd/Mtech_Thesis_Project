clc;
clear;

% Define the matrices and parameters
x1 = 5; % Initialize x1
x2 = 5; % Initialize x2
x = [x1; x2];

A = [1, 2; 2, 2];
D = [1; 2];
H = [1, 0];
F = -1.5;
gaama = 0.5; %0.5
c = 0.2; %0.2
d=0.4;
P0 = eye(2);
P0(2,2)=1;
P = eye(2);
P1 = [D' * P * D, 0; 0, 0];
P2 = 0;


% Simulate the trajectory of x using the optimal control input
num_steps = 50; % Number of time steps
x_trajectory = zeros(length(x), num_steps+1);
u_trajectory = zeros(length(size(D,2))+1, num_steps);
x_trajectory(:, 1) = x;

for i = 1:num_steps
    
    q1 = [2 * x' * A * P * D, -1]';
    q2 = [-H * D, 0]';
    r1 = x' * (A' * P * A - P + c * eye(size(A))) * x;
    r2 = -H * (A + (1 - gaama) * eye(size(A))) * x - (2 - gaama) * F;

    cvx_begin
        variable Uk(size(D,2)+1);  % Optimization variable
        minimize(Uk' * P0 * Uk);  % Objective function
        subject to
            % Inequality constraints
            Uk' * P1 * Uk + q1'*Uk + r1 <= d;
            Uk' * P2 * Uk + q2'*Uk + r2 <= 0;
    cvx_end

    %%disp(['Current Uk: ' mat2str(Uk)]);
     u_k = Uk(1);
     %d = Uk(2);
     u_trajectory(:, i) = [u_k; d];  % Store the control input
    x = A * x_trajectory(:,i) + D * u_k; % Use [u_k; d] instead of Uk
    x_trajectory(:, i+1) = x;
    
    
end

%% Plot the trajectory of x
% Assuming x_trajectory contains the state variables x1 and x2

% Define the unsafe set condition
unsafe_set_condition = x_trajectory(1, :) <= 1.54;

figure;
grid on;

subplot(1, 2, 1);
plot(0:num_steps, x_trajectory', '-');
xlabel('Time Step');
ylabel('State Variable');
legend('x1', 'x2');
title('Trajectory of State Variables x1 and x2');

% Highlight the unsafe set in translucent red
hold on;
fill([0, num_steps, num_steps, 0], [1.5, 1.5, 0, 0], 'r', 'FaceAlpha', 0.3);
hold off;

% Plot the phase plot
subplot(1, 2, 2);
plot(x_trajectory(1, :), x_trajectory(2, :), '-');
xlabel('x1');
ylabel('x2');
title('Phase Plot');

hold on;
fill([0,1.5, 1.5, 0], [0,0,max(x_trajectory(2, :)), max(x_trajectory(2, :))], 'r', 'FaceAlpha', 0.3);
hold off;

