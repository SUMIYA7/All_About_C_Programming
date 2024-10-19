/*Problem: Summation from 1 to N
Given a number N. Print the summation of the numbers that is between 1 and N(inclusive).∑i=1Ni
Input
Only one line containing a number N(1≤N≤109)

Output
Print the summation of the numbers that are between 1 and N(inclusive).
Examples
Input
3
Output
6
Input
10
Output
55
Note
First Example :

the numbers between 1 and 3 are 1,2,3 .

So the answer is: (1 + 2 + 3 = 6)

Second Example :

the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)


*/

/*Solution: */
#include <stdio.h>
int main() 
{
  long long int i,n;
  long long int sum;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
  {
      sum=(n*(n+1))/2;
  }
  printf("%lld\n",sum);
    return 0;
}