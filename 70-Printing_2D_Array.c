/*Problem: Printing 2D array*/
/*Solution */
#include <stdio.h>
int main() 
{
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
    return 0;
}
/*
#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}



*/