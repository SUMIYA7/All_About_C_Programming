/* Problem : In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

Input Format

The input consists of an integer N.
Constraints

-1000 <= N <= 1000

Output Format

Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.
Sample Input:

5
Sample Output :

Non Zero*/

/*Solution:*/
#include<stdio.h>
int main() 
{
    int N;
    scanf("%d",&N);
    if(-1000<=N<=1000 && N!=0)
        printf("Non Zero");
    else
        printf("Zero");
    
    return 0;
}
