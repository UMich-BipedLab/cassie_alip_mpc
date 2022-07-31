function L_A = getAngularMomentum(p_A,p_G,v_G,L_G,m)
% get angular momentum of a link about a reference point
% p_A is reference point
% p_G is center of mass of the link
% v_G is the velocity of center of mass
% L_G is angular momentum about center of mass

L_A = L_G + m*cross(p_G-p_A,v_G);
end

