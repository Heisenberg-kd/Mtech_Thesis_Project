clc;
clear;

% Define the matrices and parameters
x1 = 5; % Initialize x1
x = x1;

delta=1;
H=1;
c=1e-2;

% Simulate the trajectory of x using the optimal control input
num_steps = 15; % Number of time steps
x_trajectory = zeros(length(x));
u_trajectory = zeros(1, num_steps*10);
x_trajectory(:, 1) = x;
i=1;
for t = 1:0.1:num_steps
    
    cvx_begin
        variable u;  % Optimization variable
        minimize 1/2*(u * H * u);  % Objective function
        subject to
            % Inequality constraints
            % -2*x*u-2*atan(2)>=0;
            % -(atan(x)/(1+x*x))-(atan(x))^2 + u*(1/(1+x*x)+atan(x))-c*x*x<=1/(1+x*x)+delta;
            +2*x*(u-atan(x))<=0;
            -(x*atan(x)/(1+x*x))-(atan(x))^2 + u*(x/(1+x*x)+atan(x))+c*x*x<=delta;
    cvx_end

    %%disp(['Current Uk: ' mat2str(Uk)]);
     u_k = u;
     u_trajectory(:, i) = u_k;  % Store the control input
    x = -atan(x_trajectory(:,i)) + u_k; % Use [u_k; d] instead of Uk
    x_trajectory(:, i+1) = x_trajectory(:, i)+ x*0.1;
    i=i+1 
end

%% Plot the trajectory of x
% Assuming x_trajectory contains the state variables x1 and x2

figure;
grid on;

subplot(1, 1,1);
plot( x_trajectory', '-');
xlabel('Time Step');
ylabel('State Variable');
legend('x1', 'x2');
title('Trajectory of State Variables x1');


