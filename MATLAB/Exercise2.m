close all;
clear;
clc;

t = 0 : 0.01 : 2;
x = exp(2*t);
y = 2*exp(t);
z = x -y;


plot(t,x, 'b--');
hold on;
plot (t,y, 'r:'); 
plot (t,z, 'k');
title('Graph of e^{2t}, 2e^{t}, and (e^{2t}-2e^{t})');

xlabel('Time(sec)');
ylabel('Amplitude(volts)');
legend({'e^{2t}','2e^{t}','e^{2t}-2e^{t}'},'Location','northwest');