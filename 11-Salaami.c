/* Abul, Babul, and Bablu are three friends. This year Abul got X taka salami, Babul got Y taka salami and Bablu got Z taka salami.

Now the want to know what is the total amount of salami they all got this year.

Can you help them?

Input Format

Input will contain three integers X, Y, Z.
Constraints

0 <= X, Y, Z <= 1000
Output Format

Print a single integer, the total amount of salami they got.
Sample Input 0

10 25 20
Sample Output 0

55*/

/*Solution: */
#include<stdio.h>
int main() 
{
    int X,Y,Z,sum;
    scanf("%d %d %d",&X,&Y,&Z);
    sum=X+Y+Z;
    printf("%d",sum);
    return 0;
}

