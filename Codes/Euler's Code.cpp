/*
    The program is for Euler's method of factorization. The algorithm is self made
    and the Time Complexity for this program is O(n^2).

    The following numbers can work for Euler's - 1000009, 50, 38025, 10049, 1000049, 10121, 10081
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
#define ll long long
using namespace std;

int gcd(int a, int b)          //Function to calculate gcd.
{
	int remainder;
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
    ll num;
    int x,y,count=0,sqr,i=0;
    cout<<"Enter value of N: ";     //Read the number to be factorized.
    cin>>num;
    x = round(sqrt(num/2));              //Suppose x=y and find x.
    y=x;                                 //Set y=x
    int array[10];
    while(x>0 && y>0 && x<=sqrt(num) && y<=sqrt(num))
    {
        while(y<=sqrt(num))
        {
            while(x>0)
            {
                sqr = x*x + y*y;      //Calculate square of terms.
                if (sqr==num)
                {
                    array[i]=x;
                    array[i+1]=y;     //If squares are found save the factors.
                    i=i+2;
                    count++;
                }
                x--;         //Reduce x till 1.
            }
            y++;                       //Increase y till sqrt(num).
            x=round(sqrt(num/2));             //Set x again to sqrt(num/2).
        }
    }
    if(count*2>=4)
    {
        cout<<"The value of a, b, c and d: \n";
        for(i=0;i<count*2;i=i+2)
            cout<<"=>"<<array[i]<<" and "<<array[i+1]<<endl;                //Print a,b,c and d values.

        int temp1 = abs(array[0] - array[2]);
        int temp2 = abs(array[1] - array[3]);          //Calculate a-c and d-b.

        int k = gcd(temp1,temp2);     //Calculate gcd of a-c and d-b.
        int l = temp1/k;
        int m = temp2/k;              //find l and m.

        int n = (array[0] + array[2])/m;        //Calculate n.

        if(gcd(l,m)==1)
            cout<<"Program is working fine! \n\n";        //If gcd(l,m) is equal to 1, then program is working fine.
        else
            cout<<"Check for errors! \n\n";

        int factor1 = pow((0.5*k),2) + pow((0.5*n),2);    //Find factors.
        int factor2 = pow(l,2) + pow(m,2);
        cout<<"The factors for the number given are: "<<factor1<< " * "<< factor2<<"\n";
    }
    else
        cout<<"\nEuler Factorization method is not applicable for the number given. \n";
}
