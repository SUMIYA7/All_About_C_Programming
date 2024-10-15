/*Problem: In this problem you will be given an integer number N. You will have to add 5 with N and print it.

Input Format

Input consists of an integer number N.
Constraints

1 <= N <= 100
Output Format

Output the result after adding 5 with N.
Sample Input:

100
Sample Output :

105 */

/*Solution: */
#include<stdio.h>
int main() 
{

    int p,N;
    scanf("%d",&N);
    p=N+5;
    printf("%d",p);
    return 0;
}