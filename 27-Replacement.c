/*Problem: Replacement
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.

Example
Input
5
1 -2 0 3 4
Output
1 2 0 1 1 

*/
/*Solution: */
#include <stdio.h>
int main() {
  int i,N;
  scanf("%d",&N);
  long int a[N];
  for(i=0;i<N;i++)
  {
      scanf("%ld",&a[i]);
  }
for(i=0;i<N;i++)
{
    if(a[i]==0)
    {
       a[i]=0;
    }
    else if(a[i]>0)
    {
        a[i]=1;
    }
    else
    {
        a[i]=2;
    }
    printf("%ld ",a[i]);

}

    return 0;
}