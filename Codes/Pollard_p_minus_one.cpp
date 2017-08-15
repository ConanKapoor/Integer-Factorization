/*
    The program is for Pollard's p-1 method of factorization.
    Time complexity for this algorithm -
            1/2 (a + N/a ) − √ N = ( √ N − a)2/ 2a
*/

#include<iostream>           //Include libraries.
#include<math.h>
#define ll long long
using namespace std;

ll modexpo(ll base, ll exponent, int modulus)
{
    ll result = 1;
    while (exponent > 0)      //Modexpo function.
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

ll gcd(ll a, ll b)          //Function to calculate gcd.
{
	ll remainder;
	while (b != 0)
    {
		remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

main()
{
    ll N,a,max,Q,result;                 //Initialize variables.
    int i;
    cout<<"Enter value of N: ";     //Read N,C and max.
    cin>>N;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of Max: ";
    cin>>max;
    Q = a;
    for(i=1;i<=max;i++)
    {
        Q=modexpo(Q,i,N);    //Call modexpo function.
        if (i%10 ==0)
        {
            result = gcd(Q-1, N);     //Compute gcd.
            if (result>1)
            {
                cout<<result<<endl;        //Pollard rho - 1 factor.
            }
        }
    }
}
