close all;
clear;
clc;

t = 0: pi/100 : 6*pi;
x = sin(t);
y = cos(t);
z = x + y;

plot(t,x)
hold on
plot (t,y)
hold on 
plot (t,z)