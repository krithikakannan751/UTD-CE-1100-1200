close all;
clear;
clc;

x = [0.5 1 10];
y = [2 2 2];
z = [0.89 1.42 1.99];

stem(x,y);
hold on;
stem(x, z);

set(gca,'fontsize',12)%use gca to set the fonsize of the graph
title('Filter Stem Plot', 'fontsize', 18); % create the title
xlabel('Frequency (kHz)' , 'fontsize', 18); %x axis
ylabel('V(Volts)', 'fontsize', 14); %y axis

xlim([0, 12]);
ylim([0, 3]);
pbaspect([2 1 1]);
grid on;