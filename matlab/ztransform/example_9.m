clc
syms n k z

% Definisikan u_n dan v_n
u_n = n;
v_n = 1;
% Hitung Z-transform dari u_n dan v_n
U_z = ztrans (u_n, n, z); % 2-transform dari u_n 
V_z = ztrans (v_n, n, z); % 2-transform dari v_n 
% Konvolusi dalam domain z
Convolution_z = U_z * V_z;
% Invers 2-transform untuk memverifikasi hasil konvolusi 
Convolution_n = iztrans (Convolution_z, z, n); 
%Tampilkan hasil
disp('z-transform dari u_n:');
pretty (U_z);
disp('Z-transform dari v_n:');
pretty (V_z);
disp('Hasil konvolusi di domain n:');
pretty (Convolution_n);
