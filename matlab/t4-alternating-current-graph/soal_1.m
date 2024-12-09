% Gelombang Sinusoidal
% 1. The instantaneous values of two alternating voltages are given by v1 = 5sinωt
% and v2 = 8sin(ωt -phi/6).
% Plotting by matlab v1 and v2 on the same axes, using the same scale, over one
% cycle, obtain expressions for (a) v1 - v2 and (b) v1 + v2,

% Parameter
phi = pi/6; % fase (dalam radian)
omega = 2 * pi; % frekuensi sudut (rad/s)
t = linspace(0, 2*pi/omega, 1000); % satu siklus (0 hingga 2*pi/omega)

% Soal 1
v1_1 = 5 * sin(omega * t); % v1 untuk soal 1
v2_1 = 8 * sin(omega * t - phi); % v2 untuk soal 1
v1_minus_v2_1 = v1_1 - v2_1; % v1 - v2
v1_plus_v2_1 = v1_1 + v2_1; % v1 + v2

% Plot untuk Soal 1
figure;
plot(t, v1_1, 'r', 'LineWidth', 1.5); hold on;
plot(t, v2_1, 'b', 'LineWidth', 1.5);
plot(t, v1_minus_v2_1, 'g', 'LineWidth', 1.5);
plot(t, v1_plus_v2_1, 'm', 'LineWidth', 1.5);
grid on;

% Konfigurasi Grafik
title('Soal 1: Gelombang Sinusoidal dan Operasinya');
xlabel('Waktu (s)');
ylabel('Tegangan (V)');
legend('v1', 'v2', 'v1 - v2', 'v1 + v2');
hold off;
