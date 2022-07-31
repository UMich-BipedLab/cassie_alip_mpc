function CovVel = LR_CovPos2CovVel(dop, history_length, sample_time, delay, CovPos)
fil_matrix = get_PolyRegressionFilterMatrix(dop,history_length,sample_time,delay);
CovVel = sum(fil_matrix.^2)*CovPos;
end

