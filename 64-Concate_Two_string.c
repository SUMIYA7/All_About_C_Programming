/*Problem: How to concate two string*/
/*Solution: */
#include<stdio.h>
#include<string.h>

int main() {
    char a[20]="Sumiya ";
    char b[20] = "Sumu";
   int len_a = strlen(a);
   int len_b = strlen(b);
   int length = len_a + len_b;
   for(int i = len_a ,j =0; i<length;i++,j++)
   {
       a[i]=b[j];
   }
   a[length]='\0';
   printf("%s",a);

    return 0;
}
/*Another Solution : 
#include<stdio.h>
#include<string.h>

int main() {
    char a[20]="Sumiya ";
    char b[20] = "Sumu";
    strcat(a,b);
    printf("%s",a);

    return 0;
}



*/