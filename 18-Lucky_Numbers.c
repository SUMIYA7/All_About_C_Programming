/*Problem: Lucky Numbers
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N(10≤N≤99).
Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
Input
39
Output
YES
Input
64
Output
NO

*/
/*Solution: */
#include <stdio.h>
int main() 
{
    int N,unit_value,tens_value;
    scanf("%d",&N);
    unit_value=N%10;
    tens_value=(N/10)%10;
    if(unit_value % tens_value ==0 || tens_value % unit_value==0 )
    printf("YES");
    else
    printf("NO");
    return 0;
}