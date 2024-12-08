clc
syms z U_n 

U_n = z / (z-1) + z/(z^2 + 1); 
U_n_plus_2 = z^2 * U_n; 
U_n_plus_2_simplified = simplify (U_n_plus_2); 
disp('Example 8:'); 
pretty (U_n_plus_2_simplified);
