# https://www.facebook.com/mission.gate.79/posts/327808231778212
#subscribed by code house

clear;
clc;
a=[1,2,3;2,3,4;4,5,6];
b=[1,3,5;2,4,6;3,4,5];
x=size(a);
y=size(b);

if x(2)~=y(1)
    fprintf('matrix multiplication is not possible');
else
    for i=1:x(1)
        for j=1:y(2)
            d(i,j)=0;
            for k=1:x(2)
                d(i,j)=d(i,j)+a(i,k)*b(k,j);
            end
        end
    end
    axb=d
end
