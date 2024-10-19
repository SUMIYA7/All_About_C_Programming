/*Problem: Sum of Consecutive Odd Numbers
Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.
Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

Output
Print the sum of all odd numbers between X and Y (excluding X and Y).

Example
Input
3
5 6
10 4
4 9
Output
0
21
12

*/

/*Solution: */
#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t);
  int i,x,y,j;
  for(i=0;i<t;i++)
  {
      scanf("%d %d",&x,&y);
      if(x>y){
          int temp = x;
          x=y;
          y=temp;
      }
      int sum=0; 
      for(j=x+1;j<y;j++)
      {
          if(j%2!=0)
          {
              sum=sum+j;
          }
      }
      printf("%d\n",sum);
  }
    return 0;
}