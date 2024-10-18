/*Problem: Searching
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Third line contains a number X (0 ≤ X ≤ 109).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1.

Examples
Input
3
3 0 1
0
Output
1
Input
5
1 3 0 4 5
10
Output
-1
Input
4
2 3 2 1
2
Output
0

 */
/*Solution: */
#include <stdio.h>
int main() 
{
  int i,N;
  scanf("%d",&N);
  long long int a[N];
  for(i=0;i<N;i++)
  {
      scanf("%lld",&a[i]);
  }
  int found =0;
  long long int s;
  scanf("%lld",&s);
for(i=0;i<N;i++)
{
    if(a[i]==s)
    {
        printf("%d",i);
        found =1;
        break;
    }

}
if (!found) 
    {
        printf("-1");
    }
    return 0;
}