/*Problem: Given a number N and a 2D array size of N*N.Print the absolute difference between the  summation of it's two diagonals.(Primary and secondary diagonals)*/
/*Solution:  */
#include<stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    int main_diagonal =0;
    int secondary_diagonal=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                main_diagonal +=m[i][j];
            }
            if(i+j == n-1)
            {
                secondary_diagonal +=m[i][j];
            }
        }
        }
        int difference = abs(main_diagonal - secondary_diagonal);
        printf("%d\n",difference);
    

    return 0;
}