% Parameter
phi = pi/6; % fase (dalam radian)
omega = 2 * pi; % frekuensi sudut (rad/s)
t = linspace(0, 2*pi/omega, 1000); % satu siklus (0 hingga 2*pi/omega)

% Soal 2
v1_2 = 10 * sin(omega * t); % v1 untuk soal 2
v2_2 = 5 * sin(omega * t + phi); % v2 untuk soal 2
v1_minus_v2_2 = v1_2 - v2_2; % v1 - v2
v1_plus_v2_2 = v1_2 + v2_2; % v1 + v2
v1_times_v2_2 = v1_2 .* v2_2; % v1 * v2
v1_divide_v2_2 = v1_2 ./ v2_2; % v1 / v2

% Plot semua ekspresi dalam satu grafik
figure;
plot(t, v1_2, 'r', 'LineWidth', 1.5); hold on;
plot(t, v2_2, 'b', 'LineWidth', 1.5);
plot(t, v1_minus_v2_2, 'g', 'LineWidth', 1.5);
plot(t, v1_plus_v2_2, 'm', 'LineWidth', 1.5);
plot(t, v1_times_v2_2, 'c', 'LineWidth', 1.5);
plot(t, v1_divide_v2_2, 'k', 'LineWidth', 1.5);
grid on;

% Konfigurasi Grafik
title('Soal 2: Gelombang Sinusoidal dan Operasinya');
xlabel('Waktu (s)');
ylabel('Tegangan (V)');
legend('v1', 'v2', 'v1 - v2', 'v1 + v2', 'v1 * v2', 'v1 / v2');
hold off;
