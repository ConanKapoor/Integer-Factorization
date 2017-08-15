import math                #Importing libraries.

def printDivisors(n):
    #Note that this loop runs till square root
    for i in range(1,int(math.sqrt(n))+2):
        if (n%i==0):
            #If divisors are equal, print only one
            if (n/i == i):
                print("",i);
            else:       #Otherwise print both
                print("",i)
                print("",int(n/i))

"""Driver program to test above function"""

num = int(input("Enter the number to be factorized: "))
print("The factors of",num,"are: ")
printDivisors(num);

"""
The algorithm works for all range of numbers. Time complexity for
this algorithm increases exponentially but is better than basic trial
and division.
"""

