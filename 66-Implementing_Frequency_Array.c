/*Problem: Implementing Frequency Array*/
/*Solution: */
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n + 5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f[100000] ={0};
    for(int i=0;i<n;i++)
    {
        f[a[i]] =1;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d %d\n",i,f[i]);
    }

    return 0;
}
/*Modified solution*/
/*
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n + 5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f[100000] ={0};
    for(int i=0;i<n;i++)
    {
        f[a[i]] =1;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d %d\n",i,f[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        printf("%d ",x);
        if(f[x] == 1)
        {
            printf("Ache\n");
        }
        else
        {
        printf("nai\n");
        }
    }

    return 0;
}
*/