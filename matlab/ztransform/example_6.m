% I
clc
syms n r z

u_n = nchoosek (n, r); % Kombinasi
Z1 = symsum(u_n * z^(-n), n, r, inf); % Summation from n=r to infinity disp('2-transform for ncr:');
pretty(Z1);

% II
clc

u_n = (n+r) * nchoosek (n, r); % Fungsi yang diberikan 
Z2 = symsum(u_n * z^(-n), n, r, inf);
disp('Example 6_ii:'); 
pretty(Z2);

% III
clc

u_n = 1 / factorial (n + r); % Fungsi faktorial 
Z3 = symsum(u_n * z^(-n), n, 0, inf);
disp('Example 6_iii:');
pretty(Z3);

% IV
clc

u_n = 1 / factorial (n - r); % Fungsi faktorial
Z4 = symsum (u_n * z^(-n), n, r, inf); % Penjumlahan dimulai dari n = r 
disp('Example 6_iv: ');
pretty(Z4);
