/* You will be given an Array of N integers, print the count of numbers that have appeared only once.

Input Format

The first line will contain an integer N.
The next line will contain N integers.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^5
Output Format

Print a single integer,the count of numbers that have appeared only once in the array.

Sample Input 0

10
1 4 3 3 5 2 4 6 2 3
Sample Output 0

3
Explanation 0

In the sample only 1, 5, 6 have appeared only once in the array.So, the count is 3.  */
/*Solution: */
#include <stdio.h>
#define highestvalue 100000
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int frequency[highestvalue + 5] = {0};
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        frequency[arr[i]]++;
    }
    int main_count = 0;
    for (int i = 0; i <= highestvalue; i++) 
    {
        if (frequency[i] == 1) 
        {
            main_count++;
        }
    }

    printf("%d\n", main_count);
    return 0;
}


/*Another Solution*/
/*
#include <stdio.h>
int main() 
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   int main_count =0;
   for(int i=0;i<n;i++)
   {
       int count =0;
       for(int j=0;j<n;j++)
       {
           if(arr[i] == arr[j]) 
           {
                count++;
            }
       }
       if (count == 1) 
       {
            main_count++;
        }
   }
   printf("%d",main_count);
    return 0;
}


but it will be terminated due to timeout

*/