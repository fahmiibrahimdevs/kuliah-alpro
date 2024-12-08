% i
clc
syms n z theta

fl   = n * cos (n * theta);
F1_z = ztrans (fl, n, z);
disp('Example 4_i:');
pretty (F1_z);

% ii
clc
syms n z

f2 = sin((n*pi)/2 + pi/4);
F2_z = ztrans(f2, n, z);
disp('Example 4_ii:');
pretty (F2_z);

% iii
clc
syms n z

f3= exp(-2 * n);
F3_z = ztrans (f3, n, z); 
disp('Example 4_iii:');
pretty (F3_z);

% iv
clc
syms n z a 

f4 = a^abs(n);
F4_z = ztrans (f4, n, z); 
disp('Example 4_iv:');
pretty (F4_z);
