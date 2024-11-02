/*Problem: How to find the length of a string*/
/*Solution: */
#include <stdio.h>

int main() {
    char str[10]="abcde ab";
    int length =0;
    for(int i=0;str[i] != '\0';i++)
    {
        length++;
    }
    printf("%d",length);

    return 0;
}
/* Another Solution: 
#include<stdio.h>
#include<string.h>

int main() {
    char str[10]="abcde ab";
    int length = strlen(str);
    
    printf("%d",length);

    return 0;
}

*/