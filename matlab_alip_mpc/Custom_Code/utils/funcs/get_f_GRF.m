function [f_GRF_L, f_GRF_R] = get_f_GRF(obj, GRF_z)
    f_GRF_L = (GRF_z(1)-obj.stance_thre_lb)/(obj.stance_thre_ub-obj.stance_thre_lb);
    f_GRF_R = (GRF_z(2)-obj.stance_thre_lb)/(obj.stance_thre_ub-obj.stance_thre_lb);
    f_GRF_L = median([0,1,f_GRF_L ]);
    f_GRF_R = median([0,1,f_GRF_R]);
end