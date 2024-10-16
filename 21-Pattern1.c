/*Problem: N = 6            			
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

*/
/*Solution:*/
#include<stdio.h>
int main() 
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}