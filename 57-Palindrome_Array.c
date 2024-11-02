/*Problem:  Palindrome Array
Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N (1≤N≤105) number of elements.

Second line contains N numbers (1≤Ai≤109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
Input
5
1 3 2 3 1
Output
YES
Input
4
1 2 3 4
Output
NO

*/
/*Solution: */
#include <stdio.h>
int main() {
   long int N;
   scanf("%ld",&N);
   long int a[N];
   int found =1;
   for(long int i=0;i<N;i++)
   {
       scanf("%ld",&a[i]);
   }
   for(long int i=0,j=N-1;i<=j;i++,j--)
   {
       if(a[i]!=a[j])
       {
           found =0;
           break;
       }
   }
   if(found == 1)
       printf("YES\n");
   else
       printf("NO\n"); 
  
   
    return 0;
}