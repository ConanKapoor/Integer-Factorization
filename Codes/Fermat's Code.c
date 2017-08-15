/*
    The program is for Fermat's method of factorization.
    Time complexity for this algorithm -
            T(n)= O(sqrt(n)*sqrt(n)*sqrt(n/2))
                 T(n) = O((n^1.5)/sqrt(2))
    Hence the algorithm is of time complexity O((n^1.5)/sqrt(2))

*/

#include<stdio.h>
#include<math.h>
main()
{
    int num, sqrt, u, v, r, term1, term2, term1a;     //Initializing variables.
    printf("Please enter the number to be factorized: ");
    scanf("%d",&num);               //Reading input.
    sqrt = pow(num,0.5);
    u = (2*sqrt) + 1;   //Starting from upper bound.
    v = 1;              //starting from lower bound.
    r = (sqrt * sqrt) - num;    //The difference will be in decimal values...i.e. not exactly 0.
    while(r != 0)
    {
        if (r>0)
            while (r>0)
            {
                r = r - v;    //If r>0 then -
                v = v + 2;
            }
        else
        {
            r = r + u;        //If r<0 then
            u = u + 2;
        }
    }
    term1 = (u + v - 2)/2;       //x+y value.
    term2 = (u - v)/2;           //x-y value.
    term1a = (term1 + term2)/2;
    printf("Value of a: %d\n", term1a);
    printf("Value of b: %d\n", term1 - term1a);   //Printing value of a and b.
    printf("Factor 1: %d\n", term1);
    printf("Factor 2: %d", term2);   //Printing both factors.
}
