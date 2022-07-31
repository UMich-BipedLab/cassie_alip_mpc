function [q_des_part, J_square_stand_inv, J_eulerAngle_stand] = loadMatrixLibrary_StandIK(MatrixLibrary, H_com_L, H_com_R)
    % Left H
    H_com_L = median([H_com_L, MatrixLibrary.H_com_L_range(1), MatrixLibrary.H_com_L_range(2)]);
    Idx_L_float = (H_com_L - MatrixLibrary.H_com_L_range(1))/(MatrixLibrary.H_com_L_range(3));
    Idx_L_floor = floor(Idx_L_float) + 1;
    Idx_L_ceil = ceil(Idx_L_float) + 1;
    Idx_L_net = Idx_L_float - Idx_L_floor + 1;

    % Right H
    H_com_R = median([H_com_R, MatrixLibrary.H_com_R_range(1), MatrixLibrary.H_com_R_range(2)]);
    Idx_R_float = (H_com_R - MatrixLibrary.H_com_R_range(1))/(MatrixLibrary.H_com_R_range(3));
    Idx_R_floor = floor(Idx_R_float) + 1;
    Idx_R_ceil = ceil(Idx_R_float) + 1;
    Idx_R_net = Idx_R_float - Idx_R_floor + 1;

    % Compute approximate matrices
    % q
    q_des_part = Idx_L_net*Idx_R_net*MatrixLibrary.q(:, Idx_L_ceil, Idx_R_ceil) +...
        (1 - Idx_L_net)*Idx_R_net*MatrixLibrary.q(:, Idx_L_floor, Idx_R_ceil) +...
        Idx_L_net*(1 - Idx_R_net)*MatrixLibrary.q(:, Idx_L_ceil, Idx_R_floor) +...
        (1 - Idx_L_net)*(1 - Idx_R_net)*MatrixLibrary.q(:, Idx_L_floor, Idx_R_floor);
    % J_square_stand_inv
    J_square_stand_inv = Idx_L_net*Idx_R_net*MatrixLibrary.J_square_stand_inv(:, :, Idx_L_ceil, Idx_R_ceil) +...
        (1 - Idx_L_net)*Idx_R_net*MatrixLibrary.J_square_stand_inv(:, :, Idx_L_floor, Idx_R_ceil) +...
        Idx_L_net*(1 - Idx_R_net)*MatrixLibrary.J_square_stand_inv(:, :, Idx_L_ceil, Idx_R_floor) +...
        (1 - Idx_L_net)*(1 - Idx_R_net)*MatrixLibrary.J_square_stand_inv(:, :, Idx_L_floor, Idx_R_floor);
    % J_eulerAngle_stand
    J_eulerAngle_stand = Idx_L_net*Idx_R_net*MatrixLibrary.J_eulerAngle_stand(:, :, Idx_L_ceil, Idx_R_ceil) +...
        (1 - Idx_L_net)*Idx_R_net*MatrixLibrary.J_eulerAngle_stand(:, :, Idx_L_floor, Idx_R_ceil) +...
        Idx_L_net*(1 - Idx_R_net)*MatrixLibrary.J_eulerAngle_stand(:, :, Idx_L_ceil, Idx_R_floor) +...
        (1 - Idx_L_net)*(1 - Idx_R_net)*MatrixLibrary.J_eulerAngle_stand(:, :, Idx_L_floor, Idx_R_floor);
end