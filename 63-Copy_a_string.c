/*Problem: How to copy a string*/
/*Solution: */
#include<stdio.h>
#include<string.h>

int main() {
    char a[15];
    char b[15] = "sumiya sumu";
    int length = strlen(b);
    for(int i=0;i<length;i++)
    {
        a[i]=b[i];
    }
    a[length]='\0';
    printf("%s\n%s\n",a,b);

    return 0;
}

/* Another Solution: 
#include<stdio.h>
#include<string.h>

int main() {
    char a[20]="Miss";
    char b[20] = "sumiya sumu";
    int length = strlen(b);
     printf("First value of a = %s\nFirst value of b = %s\n",a,b);
    for(int i=0;i<length;i++)
    {
        a[i]=b[i];
    }
    a[length]='\0';
    printf("After copy of b into a = %s\nb remain same = %s\n",a,b);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main() {
    char a[20]="Miss";
    char b[20] = "sumiya sumu";
    strcpy(a,b);
    printf("Copying b into a = %s\n",a);

    return 0;
}
*/
/*strcpy(destination,source)*/

