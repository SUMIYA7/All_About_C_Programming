/*Problem Statement

Take two integers A and B as input and output their summation.

Input Format

You will be given A and B separated by a space.
Constraints

-10^9 <= A,B <= 10^9
Output Format

Output their summation
Sample Input 0

2 3
Sample Output 0

5
Sample Input 1

-10 5
Sample Output 1

-5 */
/*Solution: */
#include<stdio.h>
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
    return 0;
}