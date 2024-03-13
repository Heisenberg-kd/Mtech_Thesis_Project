clc;
clear;

function [c,ceq] = constraint(Uk,P1,P2,q1,q2,r1,r2,d)
c=[Uk' * P1 * Uk + q1'*Uk + r1-d,Uk' * P2 * Uk + q2'*Uk + r2] ;
ceq=[];
end


% Define the initial parameters
x0 = 5; % Initialize x1
y0 = 5; % Initialize x2
theta0=9;
x = [x0;y0;theta0];

H = [1,0,0];
F = -1.5 ;

gaama = 0.5; %0.5
c = 0.2; %0.2
d=0.3928; 
dist=0.278; % distance between wheels;
P0 = eye(3);
P = eye(3);


% Simulate the trajectory of x using the optimal control input
num_steps = 50; % Number of time steps
x_trajectory = zeros(length(x));
u_trajectory = zeros(2);
x_trajectory(:, 1) = x;

for i = 1:num_steps

    theta=x_trajectory(3,i);
    A=eye(3);
    D=0.1.*[0.5*cos(theta), 0.5*cos(theta); 0.5*sin(theta), 0.5*sin(theta);1/dist,-1/dist];

    q1 = [2 * x' * A * P * D, -1]';
    q2 = [-H * D, 0]';
    r1 = x' * (A' * P * A - P + c * eye(size(A))) * x;
    r2 = -H * (A + (1 - gaama) * eye(size(A))) * x - (2 - gaama) * F;
    
    P1=zeros(3,3);
    P1(1:2,1:2) = D' * P * D;
    P2 = 0;


    fun= @(Uk) Uk(:)'*P0*Uk(:);
    nonlcon = @(Uk) constraint(Uk(:), P1, P2, q1, q2, r1, r2,d);

    Uk = fmincon(fun,[5,5,9],[],[],[],[],[],[],nonlcon);

    u_k = Uk(1:end-1);
    d = Uk(end);
    u_trajectory(:, i) = u_k;  % Store the control input
    x = A * x_trajectory(:,i) + D * u_trajectory(:,i); % Use [u_k; d] instead of Uk
    x_trajectory(:, i+1) = x;
end

%% Plot the trajectory of x
% Assuming x_trajectory contains the state variables x1 and x2

% Define the unsafe set condition
%unsafe_set_condition = x_trajectory(1, :) <= 1.54;

figure;
grid on;

subplot(1, 2, 1);
plot(0:num_steps, x_trajectory', '-');
xlabel('Time Step');
ylabel('State Variable');
legend('x1', 'x2','x3');
title('Trajectory of State Variables x1 and x2');


hold on;
fill([0, num_steps, num_steps, 0], [1.5, 1.5, 0, 0], 'r', 'FaceAlpha', 0.3);
hold off;

% Plot the phase plot
subplot(1, 2, 2);
plot(x_trajectory(1, :), x_trajectory(2, :), '-');
xlabel('x1');
ylabel('x2');
title('Phase Plot');

% hold on;
% fill([0,1.5, 1.5, 0], [0,0,max(x_trajectory(2, :)), max(x_trajectory(2, :))], 'r', 'FaceAlpha', 0.3);
% hold off;

