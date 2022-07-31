function cov= SlideToeCovariance(obj,t,direction)
switch direction
    case 'x'
        cov_1 = obj.vx_slide_toe_1^2;
        cov_2 = obj.vx_slide_toe_2^2;
        if t < obj.Tx_slide_toe_2
%             [a,b] = YToolkits.Line_2pts([0,cov_1],[obj.Tx_slide_toe_2,cov_2]);
%             cov = a*t+b;
            [a,b] = YToolkits.InverseCurve_2pts([0,cov_1],[obj.Tx_slide_toe_2,cov_2]);
            cov = a/(t+b);
%             cov = cov_1;
        else
            cov = cov_2;
        end
    case 'y'
        cov_1 = obj.vy_slide_toe_1^2;
        cov_2 = obj.vy_slide_toe_2^2;
        if t < obj.Ty_slide_toe_2
%             [a,b] = YToolkits.Line_2pts([0,cov_1],[obj.Ty_slide_toe_2,cov_2]);
%             cov = a*t+b;
            [a,b] = YToolkits.InverseCurve_2pts([0,cov_1],[obj.Ty_slide_toe_2,cov_2]);
            cov = a/(t+b);
        else
            cov = cov_2;
        end
    case 'z'
        cov_1 = obj.vz_slide_toe_1^2;
        cov_2 = obj.vz_slide_toe_2^2;
        if t < obj.Tz_slide_toe_2
%             [a,b] = YToolkits.Line_2pts([0,cov_1],[obj.Tz_slide_toe_2,cov_2]);
%             cov = a*t+b;
            [a,b] = YToolkits.InverseCurve_2pts([0,cov_1],[obj.Tz_slide_toe_2,cov_2]);
            cov = a/(t+b);
        else
            cov = cov_2;
        end
    otherwise
        error('direction wrong')
end

