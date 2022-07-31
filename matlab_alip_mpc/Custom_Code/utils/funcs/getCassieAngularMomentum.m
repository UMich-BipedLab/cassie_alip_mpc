function LA_whole = getCassieAngularMomentum(p_A,x)
% get the angular momentum of cassie about reference point A
q = x(1:20);
dq = x(21:40);


% position of link com
P_Pelvis = p_Pelvis(q);
P_LeftPelvisRotation = p_LeftPelvisRotation(q);
P_LeftHip = p_LeftHip(q);
P_LeftThigh= p_LeftThigh(q);
P_LeftKnee = p_LeftKnee(q);
P_LeftShin = p_LeftShin(q);
P_LeftTarsus = p_LeftTarsus(q);
P_LeftToe = p_LeftToe(q);
P_RightPelvisRotation = p_RightPelvisRotation(q);
P_RightHip = p_RightHip(q);
P_RightThigh= p_RightThigh(q);
P_RightKnee = p_RightKnee(q);
P_RightShin = p_RightShin(q);
P_RightTarsus = p_RightTarsus(q);
P_RightToe = p_RightToe(q);

% velocity of link com

V_Pelvis = Jp_Pelvis(q)*dq;
V_LeftPelvisRotation = Jp_LeftPelvisRotation(q)*dq;
V_LeftHip = Jp_LeftHip(q)*dq;
V_LeftThigh= Jp_LeftThigh(q)*dq;
V_LeftKnee = Jp_LeftKnee(q)*dq;
V_LeftShin = Jp_LeftShin(q)*dq;
V_LeftTarsus = Jp_LeftTarsus(q)*dq;
V_LeftToe = Jp_LeftToe(q)*dq;
V_RightPelvisRotation = Jp_RightPelvisRotation(q)*dq;
V_RightHip = Jp_RightHip(q)*dq;
V_RightThigh= Jp_RightThigh(q)*dq;
V_RightKnee = Jp_RightKnee(q)*dq;
V_RightShin = Jp_RightShin(q)*dq;
V_RightTarsus = Jp_RightTarsus(q)*dq;
V_RightToe = Jp_RightToe(q)*dq;

% angular momentum about link com
L_Pelvis = AMWorld_Pelvis(q,dq);
L_LeftPelvisRotation = AMWorld_LeftPelvisRotation(q,dq);
L_LeftHip = AMWorld_LeftHip(q,dq);
L_LeftThigh= AMWorld_LeftThigh(q,dq);
L_LeftKnee = AMWorld_LeftKnee(q,dq);
L_LeftShin = AMWorld_LeftShin(q,dq);
L_LeftTarsus = AMWorld_LeftTarsus(q,dq);
L_LeftToe = AMWorld_LeftToe(q,dq);
L_RightPelvisRotation = AMWorld_RightPelvisRotation(q,dq);
L_RightHip = AMWorld_RightHip(q,dq);
L_RightThigh= AMWorld_RightThigh(q,dq);
L_RightKnee = AMWorld_RightKnee(q,dq);
L_RightShin = AMWorld_RightShin(q,dq);
L_RightTarsus = AMWorld_RightTarsus(q,dq);
L_RightToe = AMWorld_RightToe(q,dq);


LA_Pelvis = getAngularMomentum(p_A,P_Pelvis,V_Pelvis,L_Pelvis,10.33);
LA_LeftPelvisRotation = getAngularMomentum(p_A,P_LeftPelvisRotation,V_LeftPelvisRotation,L_LeftPelvisRotation,1.82);
LA_LeftHip = getAngularMomentum(p_A,P_LeftHip,V_LeftHip,L_LeftHip,1.17);
LA_LeftThigh= getAngularMomentum(p_A,P_LeftThigh,V_LeftThigh,L_LeftThigh,5.52);
LA_LeftKnee = getAngularMomentum(p_A,P_LeftKnee,V_LeftKnee,L_LeftKnee,.758);
LA_LeftShin = getAngularMomentum(p_A,P_LeftShin,V_LeftShin,L_LeftShin,.577);
LA_LeftTarsus = getAngularMomentum(p_A,P_LeftTarsus,V_LeftTarsus,L_LeftTarsus,.782);
LA_LeftToe = getAngularMomentum(p_A,P_LeftToe,V_LeftToe,L_LeftToe,.15);
LA_RightPelvisRotation = getAngularMomentum(p_A,P_RightPelvisRotation,V_RightPelvisRotation,L_RightPelvisRotation,1.82);
LA_RightHip = getAngularMomentum(p_A,P_RightHip,V_RightHip,L_RightHip,1.17);
LA_RightThigh= getAngularMomentum(p_A,P_RightThigh,V_RightThigh,L_RightThigh,5.52);
LA_RightKnee = getAngularMomentum(p_A,P_RightKnee,V_RightKnee,L_RightKnee,.758);
LA_RightShin = getAngularMomentum(p_A,P_RightShin,V_RightShin,L_RightShin,.577);
LA_RightTarsus = getAngularMomentum(p_A,P_RightTarsus,V_RightTarsus,L_RightTarsus,.782);
LA_RightToe = getAngularMomentum(p_A,P_RightToe,V_RightToe,L_RightToe,.15);


LA_whole = LA_Pelvis + LA_LeftPelvisRotation + LA_LeftHip + LA_LeftThigh + LA_LeftKnee + LA_LeftShin +LA_LeftTarsus + LA_LeftToe...
                    + LA_RightPelvisRotation + LA_RightHip + LA_RightThigh + LA_RightKnee + LA_RightShin +LA_RightTarsus + LA_RightToe;

end

