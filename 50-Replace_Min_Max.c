/*Problem: Replace MinMax
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
Input
5
4 1 3 10 8
Output
4 10 3 1 8 

*/
/*Solution: */
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0], max = arr[0];
    int min_index=0;int max_index=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]< min)
        {
            min = arr[i];
            min_index =i;
        }
        if(arr[i] > max)
        {
            max = arr[i];
            max_index=i;
            
        }
        
    }
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}