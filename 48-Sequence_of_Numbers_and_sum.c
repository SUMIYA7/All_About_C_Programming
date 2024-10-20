/*Problem:  Sequence of Numbers and Sum
Given multiple lines each line contains two numbers N and M.

For each line print a single line contains:

The numbers between N and M inclusive separated by single space.
The message " sum =".
The summation of all numbers between N and M inclusive.
Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.

For more clarification see the examples below.

Input
The input contains multiple line.

Each line contains two numbers N and M (-100 ≤ N, M ≤ 100).

It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

Output
For each line print the answer according to the required above in a single line.

Examples
Input
5 2
5 7
5 -1
Output
2 3 4 5 sum =14
5 6 7 sum =18
Input
5 2
6 3
5 0
Output
2 3 4 5 sum =14
3 4 5 6 sum =18
Note
M may be greater than N and Vice Versa. */
/*Solution: */
#include<stdio.h>

int main()
{
    int m, n;
    while(1)
    {
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0)
        {
            break;
        }
        if(m>n){
          int temp = m;
          m=n;
          n=temp;
      }
      int sum=0; 
      int j;
      for(j=m;j<=n;j++)
      {
          printf("%d ",j);
            sum=sum+j;
          
      }
      printf("sum =%d\n",sum);
    }

    return 0;
}

