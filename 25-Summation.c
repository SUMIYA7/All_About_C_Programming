/*Problem: Summation
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
Input
4
7 2 1 3
Output
13
Input
3
-1 2 -3
Output
2
Note
Second Example :

-1 + 2 + -3 = -2 and it absolute is 2 so the answer is 2.


*/
/*Solution: */
#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
  int i,N;
  scanf("%d",&N);
  long long int sum=0;
  long long int a[N];
  for(i=0;i<N;i++)
  {
      scanf("%lld",&a[i]);
  }
for(i=0;i<N;i++)
{
    sum=sum+a[i];
}
printf("%lld",llabs(sum));
    return 0;
}