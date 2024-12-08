clc
syms x n z

x = 4 * 2^n;
X = ztrans (x, n, z);
disp('Example 2:');
pretty(X);
