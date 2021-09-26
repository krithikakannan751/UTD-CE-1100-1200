%Bode Plot of Filter Based on Calculated Cutoff Frequency

%Setup
close all;
clear;
clc;

%plot
f = 10.^(2:0.1:6); %frequency vector
fc= 15900; %cutoff frequency
resp = 20*log10(((f/fc)./(sqrt(1+(f/fc).^2))));
f1 = [1000 10000];
vin = [0.21875 2.381];
vout = [3.91 4.1];
gain_real = 20*log10(vout./vin);
figure;
semilogx(f,resp,'linewidth',1.5);
hold on;
semilogx(f1,gain_real, '*');

%Plot setup
set(gca, 'fontsize', 12);
xlabel('Freq(Hz)', 'fontsize', 14);
ylabel('Gain(dB)', 'fontsize', 14);
title('Bode Plot of Filter Based on Calculated Cutoff Frequency', 'fontsize', 12);
grid on;
pbaspect([2 1 1]);
ylim([-20 40]);
xlim([900 1000000]);

%legend
legend({'theoretical plot','measured values'},'Location','southeast');