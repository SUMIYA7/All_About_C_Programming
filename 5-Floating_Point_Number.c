/*Problem: In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.

Input Format

Input will contain a floating point number x.

Constraints

1.0 <= x <= 100.0

Output Format

Print the number x upto 3 decimal points.
Sample Input 0

22.12344
Sample Output 0

22.123*/

/*Solution :*/
#include<stdio.h>
int main() 
{
    float a;
    scanf("%f",&a);
    printf("%.3f",a);
    return 0;
}
