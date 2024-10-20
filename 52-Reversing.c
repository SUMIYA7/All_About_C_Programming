/*Problem: F. Reversing
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

int main() 
{
    int n;
    scanf("%d",&n);
    long int arr[n];
    long int i;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}