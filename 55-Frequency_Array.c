/*Problem: Frequency Array:
Given 2 numbers N, M and an array A of N numbers. For every number from 1 to M, print how many times this number appears in this array.
Sample Input
10 5
1 2 3 4 5 3 2 1 5 3
Sample output
2
2
3
1
2
Note:
Numbers from 1 to 5 appearance are :
1 appears 2 times in the array .
2 appears 2 times in the array.
3 appears 3 times in the array.
4 appears once in the array.
5 appears 2 times in the array.    */

/*Solution: */
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    int arr[n];
    int i;
    int freq[m + 1];
    for(i=1;i<=m;i++)
     {
        freq[i] = 0;
     }
    for (i=0;i<n;i++) 
     {
        scanf("%d",&arr[i]);
        if(arr[i]>=1 && arr[i]<=m) 
        {
            freq[arr[i]]++;
        }
    }
    for(i=1;i<=m;i++) 
    {
        printf("Number %d appears %d times\n", i, freq[i]);
    }

    return 0;
}
