function [B_bar_inv,B_bar_inv_times_M_bar] = Select_DynamicMatrix(obj,DynamicMatrixLibrary,left_knee,right_knee,stanceLeg)
if stanceLeg == -1
    left_knee = median([left_knee, DynamicMatrixLibrary.LeftStance.st_knee_range(1),DynamicMatrixLibrary.LeftStance.st_knee_range(2)]);
    st_index_raw = (left_knee - DynamicMatrixLibrary.LeftStance.st_knee_range(1))/DynamicMatrixLibrary.LeftStance.st_knee_range(3);
    st_index_1 = floor(st_index_raw) + 1;
    st_index_2 = ceil(st_index_raw) + 1;
    st_index_digit = st_index_raw - st_index_1 + 1;
    
    right_knee = median([right_knee, DynamicMatrixLibrary.LeftStance.sw_knee_range(1),DynamicMatrixLibrary.LeftStance.sw_knee_range(2)]);
    sw_index_raw = (right_knee - DynamicMatrixLibrary.LeftStance.sw_knee_range(1))/DynamicMatrixLibrary.LeftStance.sw_knee_range(3);
    sw_index_1 = floor(sw_index_raw) + 1;
    sw_index_2 = ceil(sw_index_raw) + 1;
    sw_index_digit = sw_index_raw - sw_index_1 + 1;
    
    B_bar_inv = st_index_digit*sw_index_digit * DynamicMatrixLibrary.LeftStance.B_bar_inv(:,:,st_index_2,sw_index_2)...
        + (1 - st_index_digit)*sw_index_digit * DynamicMatrixLibrary.LeftStance.B_bar_inv(:,:,st_index_1,sw_index_2)...
        + st_index_digit*(1 - sw_index_digit) * DynamicMatrixLibrary.LeftStance.B_bar_inv(:,:,st_index_2,sw_index_1)...
        + (1 - st_index_digit)*(1 - sw_index_digit) * DynamicMatrixLibrary.LeftStance.B_bar_inv(:,:,st_index_1,sw_index_1);   
    
    B_bar_inv_times_M_bar = st_index_digit*sw_index_digit * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_M_bar(:,:,st_index_2,sw_index_2)...
        + (1 - st_index_digit)*sw_index_digit * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_M_bar(:,:,st_index_1,sw_index_2)...
        + st_index_digit*(1 - sw_index_digit) * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_M_bar(:,:,st_index_2,sw_index_1)...
        + (1 - st_index_digit)*(1 - sw_index_digit) * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_M_bar(:,:,st_index_1,sw_index_1);
    
%     B_bar_inv_times_H_bar = st_index_digit*sw_index_digit * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_H_bar(:,st_index_2,sw_index_2)...
%         + (1 - st_index_digit)*sw_index_digit * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_H_bar(:,st_index_1,sw_index_2)...
%         + st_index_digit*(1 - sw_index_digit) * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_H_bar(:,st_index_2,sw_index_1)...
%         + (1 - st_index_digit)*(1 - sw_index_digit) * DynamicMatrixLibrary.LeftStance.B_bar_inv_times_H_bar(:,st_index_1,sw_index_1);
    
else
    right_knee = median([right_knee, DynamicMatrixLibrary.RightStance.st_knee_range(1),DynamicMatrixLibrary.RightStance.st_knee_range(2)]);
    st_index_raw = (right_knee - DynamicMatrixLibrary.RightStance.st_knee_range(1))/DynamicMatrixLibrary.RightStance.st_knee_range(3);
    st_index_1 = floor(st_index_raw) + 1;
    st_index_2 = ceil(st_index_raw) + 1;
    st_index_digit = st_index_raw - st_index_1 + 1;
    
    left_knee = median([left_knee, DynamicMatrixLibrary.RightStance.sw_knee_range(1),DynamicMatrixLibrary.RightStance.sw_knee_range(2)]);
    sw_index_raw = (left_knee - DynamicMatrixLibrary.RightStance.sw_knee_range(1))/DynamicMatrixLibrary.RightStance.sw_knee_range(3);
    sw_index_1 = floor(sw_index_raw) + 1;
    sw_index_2 = ceil(sw_index_raw) + 1;
    sw_index_digit = sw_index_raw - sw_index_1 + 1;
    
    B_bar_inv = st_index_digit*sw_index_digit * DynamicMatrixLibrary.RightStance.B_bar_inv(:,:,st_index_2,sw_index_2)...
        + (1 - st_index_digit)*sw_index_digit * DynamicMatrixLibrary.RightStance.B_bar_inv(:,:,st_index_1,sw_index_2)...
        + st_index_digit*(1 - sw_index_digit) * DynamicMatrixLibrary.RightStance.B_bar_inv(:,:,st_index_2,sw_index_1)...
        + (1 - st_index_digit)*(1 - sw_index_digit) * DynamicMatrixLibrary.RightStance.B_bar_inv(:,:,st_index_1,sw_index_1);
    
    B_bar_inv_times_M_bar = st_index_digit*sw_index_digit * DynamicMatrixLibrary.RightStance.B_bar_inv_times_M_bar(:,:,st_index_2,sw_index_2)...
        + (1 - st_index_digit)*sw_index_digit * DynamicMatrixLibrary.RightStance.B_bar_inv_times_M_bar(:,:,st_index_1,sw_index_2)...
        + st_index_digit*(1 - sw_index_digit) * DynamicMatrixLibrary.RightStance.B_bar_inv_times_M_bar(:,:,st_index_2,sw_index_1)...
        + (1 - st_index_digit)*(1 - sw_index_digit) * DynamicMatrixLibrary.RightStance.B_bar_inv_times_M_bar(:,:,st_index_1,sw_index_1);
    
%     B_bar_inv_times_H_bar = st_index_digit*sw_index_digit * DynamicMatrixLibrary.RightStance.B_bar_inv_times_H_bar(:,st_index_2,sw_index_2)...
%         + (1 - st_index_digit)*sw_index_digit * DynamicMatrixLibrary.RightStance.B_bar_inv_times_H_bar(:,st_index_1,sw_index_2)...
%         + st_index_digit*(1 - sw_index_digit) * DynamicMatrixLibrary.RightStance.B_bar_inv_times_H_bar(:,st_index_2,sw_index_1)...
%         + (1 - st_index_digit)*(1 - sw_index_digit) * DynamicMatrixLibrary.RightStance.B_bar_inv_times_H_bar(:,st_index_1,sw_index_1);
end
end



