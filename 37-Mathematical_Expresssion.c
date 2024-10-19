/*Problem: Mathematical Expression
time limit per test0.25 seconds
memory limit per test256 MB
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples
Input
5 + 10 = 15
Output
Yes
Input
3 - 1 = 2
Output
Yes
Input
2 * 10 = 19
Output
20

*/

/*Solution: */
#include <stdio.h>

int main() {
   int A,B,C;
   char s,q;
   scanf("%d %c %d %c %d",&A,&s,&B,&q,&C);
   if(s=='+' && q=='=')
   {
       if(A+B==C)
       {
       printf("Yes\n");
       }
       else
       {
       printf("%d\n",A+B);
       }
   }
   else if(s=='-' && q=='=')
   {
       if(A-B==C)
       {
       printf("Yes\n");
       }
       else
       {
       printf("%d\n",A-B);
       }
   }
   else
   {
       if(A*B==C)
       {
       printf("Yes\n");
       }
       else
       {
       printf("%d\n",A*B);
       }
   }

    return 0;
}