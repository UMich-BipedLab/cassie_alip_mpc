function C = cartesian(varargin)
%CARTESIAN returns the cartesian product of its argumnets
%
%Syntax:
%C = cartesian(X1, X2, ...)
%
%Input arguments:
% X1, X2, ... 	sequence of vectors
%
%Output arguments:
% C             Cartesian product of input arguments, i.e.,
%               all combinations (x1, x2, ...) where xi is 
%               an element of Xi.
% 
    args = varargin;
    n = nargin;

    [F{1:n}] = ndgrid(args{:});

    for i=n:-1:1
        G(:,i) = F{i}(:);
    end

    C = unique(G , 'rows');
end
