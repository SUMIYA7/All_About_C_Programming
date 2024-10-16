/*Problem: N = 5            			
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
/*Solution: */
#include<stdio.h>
int main() 
{
    int i,j,N;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
