% i
clc
syms n z

u_n = 1 / factorial (n); % Fungsi u_n = 1/n!
Z1 = symsum(u_n * z^(-n), n, 0, inf); % Summation from n=0 to infinity
disp('Example 7_i: ');
pretty(Z1);

% ii
clc
syms r

u_n = 1 / factorial (n + r); % Fungsi u_n = 1/(n+r)!
Z2 = symsum (u_n * z^(-n), n, 0, inf);
disp('Example 7_ii: ');
pretty(Z2);

% iii
clc

u_n = 1 / factorial (n - r); % Fungsi u_n = 1/(n-r) !
Z3 = symsum (u_n * z^(-n), n, r, inf); % Summation starts from n = r 
disp('Z-transform for 1/(n-r)!:');
pretty(Z3);
