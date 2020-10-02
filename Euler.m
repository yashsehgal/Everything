# https://www.facebook.com/jyotiprakash.nayak.372/posts/1837128093092133
# subscibed by Code House
clear all
clc
%y'=x+2y
%y(0)=0
dy=@(x,y)x+2*y;
x0=0;
xn=1;
y=1;
h=0.1;
for x=x0:h:xn-h
 y=y+dy(x,y)*h;
 x=x+h;
end
solx=x
soly=y
