/*Problem: 
N = 6           			
A
B B
C C C
D D D D
E E E E E
F F F F F F 
*/
/*Solution:*/
#include<stdio.h>
int main() 
{
    int i,N,j;
    char ch;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        ch='A'+(i-1);
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);

        }
        printf("\n");
    }
    return 0;
}
