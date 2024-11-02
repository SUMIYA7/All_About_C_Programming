/*Problem: You will be given two integer numbers A and B , you need to print the difference between these two numbers. Remember, difference is always positive.

Note: Use pointers to solve this Problem.

Input Format

Input will contain two integers A and B.
Constraints

0 <= A <= 100
0 <= B <= 100
Output Format

Print a single integer representing the absolute difference between A and B.
Sample Input 0

6 10
Sample Output 0

4    */
/*Solution:*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *x = &a;
    int *y = &b;
    printf("%d",abs(*x-*y));
    return 0;
}