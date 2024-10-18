/*Problem: Lowest Number
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Examples
Input
3
1 2 3
Output
1 1
Input
5
5 6 2 3 2
Output
2 3

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
  long int min =a[0];
  int position =1;
for(i=0;i<=N;i++)
{
    if(a[i]<min)
    {
        min=a[i];
        position=i+1;
    }
    else
    {
        min=min;
    }
}
printf("%ld %d",min,position);

    return 0;
}