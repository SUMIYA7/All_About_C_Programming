/*Problem:  Lucky Array
Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105).

Output
Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).

Examples
Input
5
8 8 9 5 9
Output
Lucky
Input
5
3 3 3 5 3
Output
Unlucky
Note
First Example :

minimum element is 5 and its frequency is 1 and it's ODD so the array is lucky.

Second Example :

minimum element is 3 and its frequency is 4 and it's EVEN so the array is not lucky.   */
/*Solution: */
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    if(n>=2 && n<=1000)
    {
        long long int arr[n];
    long long int i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int min = arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]< min)
        {
            min = arr[i];
        }
        
    }
    long long int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]== min)
        {
            count++;
        }
        
    }
    
    if(count %2 !=0)
    printf("Lucky");
    else
    printf("Unlucky");
    }
    return 0;
}