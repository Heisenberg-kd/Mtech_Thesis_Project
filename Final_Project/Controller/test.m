function u_k = fcn(x)
    coder.extrinsic('opt_problem');
    H = [1,0,0];
    F = -1.5 ;
    
    gaama = 0.5; %0.5
    c = 0.2; %0.2
    d=0.3928; 
    dist=0.278; % distance between wheels;
    P0 = eye(3);
    P = eye(3);

    theta=x(3);
    A=eye(3);
    D=[0.5*cos(theta), 0.5*cos(theta); 0.5*sin(theta), 0.5*sin(theta);1/dist,-1/dist];

    q1 = [2 * x' * A * P * D, -1]';
    q2 = [-H * D, 0]';
    r1 = x' * (A' * P * A - P + c * eye(size(A))) * x;
    r2 = -H * (A + (1 - gaama) * eye(size(A))) * x - (2 - gaama) * F;
    
    P1=zeros(3,3);
    P1(1:2,1:2) = D' * P * D;
    P2 = 0;

    fun= @(Uk)Uk(:)'*P0*Uk(:);
  nonlcon = @(Uk) constraint(Uk(:), P1, P2, q1, q2, r1, r2);
  Uk = fmincon(fun,[5,5,9],[],[],[],[],[],[],nonlcon);
    
    u_k = Uk(1:2);
end


function [c,ceq] = constraint(Uk,P1,P2,q1,q2,r1,r2)
c=[Uk' * P1 * Uk + q1'*Uk + r1,Uk' * P2 * Uk + q2'*Uk + r2] ;
ceq=[];
end