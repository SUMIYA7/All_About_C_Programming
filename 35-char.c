/*Problem: Char
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
Input
a
Output
A
Input
A
Output
a

*/

/*Solution: */
#include <stdio.h>

int main() {
    char ch,c;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        c=ch+32;
    printf("%c",c);
    }
    else
    {
        c=ch-32;
       printf("%c",c); 
    }

    return 0;
}