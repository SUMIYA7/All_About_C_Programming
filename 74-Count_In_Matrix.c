/* Problem Statement

You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.

Input Format

First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
Then the 2D matrix will be given.
Then X lines will contain X integer Numbers.
Constraints

2 <= N,M,X <= 100
0 <= Element <= 1000
0 <= Number <=1000
Output Format

For each of the x integers print a single line with how many times that number have appeared.

Sample Input 0

2 3 3
1 2 5
2 6 4
2
6
7
Sample Output 0

2
1
0                         */
/*Solution: */
#include <stdio.h>
int main() {
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    int arr[n][m];
    int number[x];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<x;k++)
    {
        scanf("%d",&number[k]);
    }
    for (int k = 0; k < x; k++) 
    {
        int count = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (arr[i][j] == number[k]) 
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}