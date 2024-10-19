/*Problem: Sort Numbers
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

Examples
Input 
3 -2 1
Output
-2
1
3

3
-2
1
Input
-2 10 0
Output
-2
0
10

-2
10
0

*/

/*Solution: */
#include <stdio.h>
 
int main() {
   long long int a,b,c;
   scanf("%lld %lld %lld",&a,&b,&c);
   if(a<=b && b<=c)
   {
       printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld\n",a,b,c,a,b,c);
   }
   else if(a<=b && c<=b && a<=c)
   {
       printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld\n",a,c,b,a,b,c);
   }
   else if(a<=b && c<=b && c<=a)
   {
       printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld\n",c,a,b,a,b,c);
   }
   else if(b<=a && a<=c)
   {
       printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld\n",b,a,c,a,b,c);
   }
   else if(b<=a && c<=a && b<=c)
   {
       printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld\n",b,c,a,a,b,c);
   }
   else
   {
       printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld\n",c,b,a,a,b,c);
   }
 
    return 0;
}