clc
clear all
syms a b a1 b1 Msg Enc
Msg=input('Please Enter your message: ');
a=input('Please Enter the value of a: ');
b=input('Please Enter the value of b: ');
a1=input('Please Enter the value of a1: ');
b1=input('Please Enter the value of b1: ');
M = (a*b) - 1;
e = (a1*M) + a;
d = (b1*M) + b;
n = ((e*d)-1)/M;
Encryption = mod(Msg * e, n)
Enc = input('Please Enter the Encrypted value: ');
Decryption = mod(Enc * d, n)