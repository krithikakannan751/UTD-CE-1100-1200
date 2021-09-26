close all;
clear;
clc;

f = 10.^(2:0.1:6); %frequency vector
fc= 2500; %cutoff frequency
resp = 20*log10(((f/fc)./(sqrt(1+(f/fc).^2))));

f1 = [1000,2500,30000];
vin = [2,2,2];
vout = [0.65,1.28,2.00];

gain_real = 20*log10(vout./vin);
figure;
semilogx(f,resp,'linewidth',1.5);
hold on;
semilogx(f1,gain_real, '*');
set(gca, 'fontsize', 12);
xlabel('Freq(Hz)', 'fontsize', 14);
ylabel('Gain(dB)', 'fontsize', 14);
title('Bode Plot', 'fontsize', 18);
grid on;
pbaspect([2 1 1]);
ylim([-25 5]);
xlim([100 1000000]);

legend({'theoretical plot','measured values'},'Location','southeast');

