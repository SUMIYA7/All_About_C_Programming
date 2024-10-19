/*Problem: Comparison
Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.

Input
Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

Output
Print "Right" if the comparison is true, "Wrong" otherwise.

Examples
Input
5 > 4
Output
Right
Input
9 < 1
Output
Wrong
Input
4 = 4
Output
Right */

/*Solution: */
#include <stdio.h>

int main() {
   int A,B;
   char ch;
   scanf("%d %c %d",&A,&ch,&B);
   if(ch=='>')
   {
       if(A>B)
       {
       printf("Right\n");
       }
       else
       {
       printf("Wrong\n");
       }
   }
   else if(ch=='<')
   {
       if(A<B)
       {
       printf("Right\n");
       }
       else
       {
       printf("Wrong\n");
       }
   }
   else
   {
       if(A==B)
       {
       printf("Right\n");
       }
       else
       {
       printf("Wrong\n");
       }
   }

    return 0;
}