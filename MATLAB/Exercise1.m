close all;
clear;
clc;

t = 0: pi/100 : 6*pi;
x = sin(t);
a = 2*x;
b = sin(2*t);


%plot(t,x);
plot (t, a, 'g*');
hold on;
plot(t, b, 'ro');