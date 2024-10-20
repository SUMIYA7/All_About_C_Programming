/*Problem: Sum Digits:
Given a number N. Now, Print the summation of all digits.
Sample Input
13305
Sample Output
12
Note:
1 + 3 + 3 + 0 + 5 = 12 .

*/
/*Solution: */
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int sum = 0;
    while(number>0) 
    {
        int digit = number % 10;
        sum =sum+digit;
        number=number/10;
    }
    printf("%d\n", sum);

    return 0;
}
