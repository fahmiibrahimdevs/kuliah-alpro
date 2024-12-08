clc
syms n z a

f = 2*n + 3*sin(n*pi/4) - 5*a^4;
F = ztrans(f, n, z);
disp('Example 1:')
pretty(F);
