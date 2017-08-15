clc
clear all
syms num i
num=input('Enter the number to be factorized: ');
fprintf('The factors of the given number are: ');
for i=1:(num^0.5)+2
    if mod(num,i)==0
        if num/i == i
            i
        else
            i
            num/i
        end
    end
end