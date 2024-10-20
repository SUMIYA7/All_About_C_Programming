/*Problem:  Lucky Numbers
Given two numbers A and B. Print all lucky numbers between A and B inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

Input
Only one line containing two numbers A and B(1≤A≤B≤105).

Output
Print all lucky numbers between A and B inclusive separated by a space. If there is no lucky number print -1.

Examples
Input
4 20
Output
4 7 
Input
8 15
Output
-1

*/
/*Solution: */
#include<stdio.h>
int main()
{
    long int a,b;
    int found =0;
    scanf("%ld %ld",&a,&b);
    for(long int i=a;i<=b;i++)
    {
       int number=i;
       int isValid = 1;
       while(number>0){
           int digit = number % 10;
           if(digit != 4 && digit != 7)
           {
               isValid =0;
               break;
           }
           number = number/10;
       }
       if (isValid) {
            printf("%d ", i);
            found = 1;
        }
    }
     if (!found) {
        printf("-1");
    }

    printf("\n");

    return 0;
}