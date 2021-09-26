close all;
clear;
clc;

stem(100,2); %post coordinate on the stem plot
hold on;
stem(500,8);
stem(1000,6);
set(gca,'fontsize',12)%use gca to set the fonsize of the graph
title('Filter Stem Plot', 'fontsize', 18); % create the title
xlabel('Frequency (Hz)' , 'fontsize', 18); %x axis
ylabel('V(Volts)', 'fontsize', 14); %y axis

xlim([0, 1200]);
ylim([0, 10]);
pbaspect([2 1 1]);
grid on;