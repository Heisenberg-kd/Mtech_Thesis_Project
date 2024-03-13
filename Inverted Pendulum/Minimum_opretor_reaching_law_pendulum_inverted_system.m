C = [2.9659 0.6724 6.8462 1];
% initial conditions
x1(1) = 0.5;
x2(1) = 0.25;
x3(1) = 0.5;
x4(1) = 0.25;
s_prev = C*[x1(1); x2(1);x3(1);x4(1)];
% constants
a=0.1;
e = 10;
ko = 2;
tf = 9;
%system matrices
% A = [0.9952 0.0360 0  0;0.0975 0.9283 0.2912 0; 0.0265  -0.0657 1.0785 0.0361; 0.3775  1.2928 1.2117 0.9698];
% B = [0; 0; 0; 0.046];
A = [0      1              0           0;
     0 -(I+m*l^2)*b/p  -(m^2*g*l^2)/p   +m*l*k/p;
     0      0              0           1;
     0 +(m*l*b)/p       m*g*l*(M+m)/p -k*(M+m)/p];
B = [     0;
     (I+m*l^2)/p;
          0;
        -m*l/p];
% initialize arrays to store data
s_array = zeros(100, 1);
u_array = zeros(100, 1);
x1_array= zeros(100, 1);
x2_array= zeros(100, 1);
x3_array= zeros(100, 1);
x4_array= zeros(100, 1);
for k = 1:100
    x = [x1(k); x2(k); x3(k); x4(k)];
    s = C*x;
    s_prev = s;
    % Reaching Law
    % s(k+1) = s(k) + sign(s(k))*min(e,abs(s(k)*((k+1)/(ceil(tf+ko)))));
    d = [0; 0; 0; 1]*(1.5*sin(0.036*k)+2*cos(0.01*k)+0.027*cos(0.0367*k)-0.002*sin(0.01*k));
    u = -(C*B)^-1*[C*A*x + C*d - 0.5*s - sign(s)*min((abs(s))^a,(abs(s)/(ceil(tf+ko)-k)))];
    x_next = A*x + B*u + d;
    x1(k+1) = x_next(1);
    x2(k+1) = x_next(2);
    x3(k+1) = x_next(3);
    x4(k+1) = x_next(4);
    % store s and time data in arrays
    s_array(k) = s
    u_array(k) = u;
    x1_array(k)= x1(k);
    x2_array(k)= x2(k);
    x3_array(k)= x3(k);
    x4_array(k)= x4(k);
end

% Remove the first element from s_array and u_array
s_array = s_array(1:end);
u_array = u_array(1:end);
x1_array = x1_array(1:end);
x2_array = x2_array(1:end);
x3_array = x3_array(1:end);
x4_array = x4_array(1:end);

plot(s_array, '*-.')
figure 
plot(u_array, '*--')
figure 
plot(x1_array, '*-.')
figure 
plot(x2_array, '*--')
figure 
plot(x3_array, '*-.')
figure 
plot(x4_array, '*--')

