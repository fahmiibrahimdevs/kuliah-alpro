clc
syms n z

% Definisikan u_n dan v_n menggunakan fungsi dirac
u_n = dirac (n) - dirac (n-1);
v_n = 2*dirac (n) + dirac (n-1);
% Hitung Z-transform dari u_n dan v_n
U_z = simplify(ztrans (u_n, n, z)); % Z-transform dari u_n 
V_z = simplify (ztrans (v_n, n, z)); % Z-transform dari v_n 
% Kalikan hasil Z-transform untuk konvolusi
Convolution_z = simplify (U_z * V_z);
% Tampilkan hasil dalam bentuk yang disederhanakan 
disp('Z-transform dari u_n:');
pretty(U_z);
disp('Z-transform dari v_n:');
pretty(V_z);
disp('Z-transform dari hasil konvolusi u_n * v_n:');
pretty(Convolution_z);
