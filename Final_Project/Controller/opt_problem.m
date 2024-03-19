function Uk = opt_problem(P0,P1,P2,q1,q2,r1,r2,d)
  fun= @(Uk)Uk(:)'*P0*Uk(:);
  nonlcon = @(Uk) constraint(Uk(:), P1, P2, q1, q2, r1, r2,d);
  Uk = fmincon(fun,[5,5,9],[],[],[],[],[],[],nonlcon);
end

function [c,ceq] = constraint(Uk,P1,P2,q1,q2,r1,r2,d)
c=[Uk' * P1 * Uk + q1'*Uk + r1-d,Uk' * P2 * Uk + q2'*Uk + r2] ;
ceq=[];
end