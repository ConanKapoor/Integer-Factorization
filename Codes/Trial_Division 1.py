"""
Python Program implementation to find the factors of a number
by trial and division method.
"""

num = int(input("Enter the number to be factorized: "))
print("The factors of",num,"are: ")
test_factor = 1                            #Starting from 1.
while( num > 1 and test_factor<= num ):
    if (num % test_factor == 0):
       #num=num/test_factor  #If prime factorization needed.
       print(test_factor)
    test_factor=test_factor+1

"""
The algorithm works for all range of numbers. Time complexity for
this algorithm increases exponentially.
"""
