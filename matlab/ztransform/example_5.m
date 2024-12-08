clc
syms z

Z1 = z^(-1) / (1 - 2 * z^(-1)); % |2/z❘ > 1 atau |z❘ < 2
Z2 = 1 / (1 - 3 * z^(-1)); % |3/z❘ < 1 atau |z| > 3
Z_total = Z1 + Z2;
disp('Example 5:');
pretty(simplify (Z_total));
