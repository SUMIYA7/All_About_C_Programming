/*Problem: Primes from 1 to n
Given a number N. Print all prime numbers between 1 and N inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .
Input
Only one line containing a number N (2≤N≤103).

Output
Print all prime numbers between 1 and N (inclusive) separated by a space.

Example
Input
10
Output
2 3 5 7 */
/*Solution: */
#include<stdio.h>
int main()
{
    int number;
    int found;
    scanf("%d",&number);
 
    for(int i=1;i<=number;i++)
    {
        found =0;
        for(int j=2;j<i;j++)
        {
            if(i%j ==0)
            {
                found++;
            }
        }
        if(found == 0 && i!=1)
        {
        printf("%d ",i);
        }
    }
   
    return 0;
}