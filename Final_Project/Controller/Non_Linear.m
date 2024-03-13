clc;
clear;
% Define the matrices and parameters
x1 = 5; % Initialize x1
x2 = 5; % Initialize x2
x = [x1; x2];

H = [1, 0];
F = -1.5;
gaama = 0.7;
c=0.07;
P=eye(2);
p=10;
d=0.5;
% Simulate the trajectory of x using the optimal control input
num_steps = 90; % Number of time steps
x_trajectory = zeros(length(x), num_steps+1);
u_trajectory = zeros(2, num_steps);
x_trajectory(:, 1) = x;


    for i = 1:num_steps
        
        x1_k=x(1);
        x2_k=x(2);
        
        cvx_begin;
            variables u_k d;
            expression A(2,1);% Optimization variable
            minimize(u_k' * u_k +p*d*d);  % Objective function
            A=[sin(x1_k)+x1_k+2*x2_k+u_k;sin(x2_k)+2*x1_k+2*x2_k+2*u_k ];
            subject to
                % Inequality constraints
                A'*P*A -x'*P*x+ c*(x'*x) <=d;
                H*A+F +(1-gaama)*(H*x+F) >=0;
        cvx_end
    
        if ~strcmp(cvx_status, 'Solved') && ~strcmp(cvx_status, 'Inaccurate/Solved')
        disp(['CVX status: ' cvx_status]);
        break;
        end
    
        %%disp(['Current Uk: ' mat2str(Uk)]);
        u_trajectory(:, i) = [u_k; d];  % Store the control input
    
        x1=sin(x1_k)+x1_k+2*x2_k+u_k;  % Use [u_k; d] instead of Uk
        x2=sin(x2_k)+2*x1_k+2*x2_k+2*u_k;
    
        x = [x1; x2];
        x_trajectory(:, i+1) = x;
        
        
    end

%% Plot the trajectory of x
% Assuming x_trajectory contains the state variables x1 and x2

% Define the unsafe set condition
unsafe_set_condition = x_trajectory(1, :) <= 1.5;

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
fill([min(x_trajectory(1,:)),1.5, 1.5, min(x_trajectory(1,:))], [min(x_trajectory(2, :)),min(x_trajectory(2, :)),max(x_trajectory(2, :)), max(x_trajectory(2, :))], 'r', 'FaceAlpha', 0.3);
hold off;


