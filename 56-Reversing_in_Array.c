/*Problem: Reversing
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
Input
4
5 1 3 2
Output
2 3 1 5 
Input
5
1 2 3 4 5
Output
5 4 3 2 1 

*/
/*Solution: */
#include <stdio.h>
int main() {
   long int N;
   scanf("%ld",&N);
   long int a[N];
   for(long int i=0;i<N;i++)
   {
       scanf("%ld",&a[i]);
   }
   for(long int i=0,j=N-1;i<=j;i++,j--)
   {
       long int temp = a[i];
       a[i]=a[j];
       a[j]=temp;
   }
   for(long int i =0;i<N;i++)
   {
       printf("%d ",a[i]);
   }
    return 0;
}