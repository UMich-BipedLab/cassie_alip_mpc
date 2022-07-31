function cov = LinearAcceleratorCovariance(obj,t,direction);
switch direction
    case 'x'
        if t < obj.LAx_T_1 || (obj.step_time - t) < obj.LAx_T_2
            cov = obj.LAx_std_1^2;
        else
            cov = obj.LAx_std_2^2;
        end
    case 'y'
        if t < obj.LAy_T_1 || (obj.step_time - t) < obj.LAy_T_2
            cov = obj.LAy_std_1^2;
        else
            cov = obj.LAy_std_2^2;
        end
    case 'z'
        if t < obj.LAz_T_1 || (obj.step_time - t) < obj.LAz_T_2
            cov = obj.LAz_std_1^2;
        else
            cov = obj.LAz_std_2^2;
        end
    otherwise
        error('direction wrong')
end


