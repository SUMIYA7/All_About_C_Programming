/*Problem: How can we reverse a string?*/
/*Solution: */
#include <stdio.h>
#include<string.h>
int main() 
{
   char str[30]="sumiya jakariya";
   int len =strlen(str);
   for(int i=0,j=len-1;i<=j;i++,j--)
   {
       char temp = str[i];
       str[i]=str[j];
       str[j]=temp;
   }
   printf("%s",str);
    return 0;
}
/*Checking Palindrome String*/
/*Solution: */
/*
#include <stdio.h>
#include<string.h>
int main() 
{
   char str[30]="sumiya jakariya";
   char str2[30];
   strcpy(str2,str);
   int len =strlen(str);
   for(int i=0,j=len-1;i<=j;i++,j--)
   {
       char temp = str[i];
       str[i]=str[j];
       str[j]=temp;
   }
   printf("%s %s",str2,str);
    return 0;
}

*/
/*Another way of reversing*/
/*#include <stdio.h>
#include<string.h>
int main() 
{
   char str[30]="sumiya jakariya";
   strrev(str);
   printf("%s",str);
    return 0;
}*/