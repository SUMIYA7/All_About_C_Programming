/*Problem: Next Alphabet
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C

Output
Print the next letter to C
 in the alphabet.

Example
Input
a
Output
b
The next letter to z is a.


*/
/*Solution: */
#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c",&ch);
    if(ch>=97 && ch<122)
    {
        printf("%c",ch+1);
    }
    if(ch == 122)
    printf("%c",97);
    return 0;
}