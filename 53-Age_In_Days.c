/*Problem: Age in Days
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.

Examples
Input
400
Output
1 years
1 months
5 days
Input
800
Output
2 years
2 months
10 days
Input
30
Output
0 years
1 months
0 days     */
/*Solution: */
#include <stdio.h>

int main() 
{
    int age;
    scanf("%d",&age);
    int years = age/365;
    int remaining = age % 365;
    int months = remaining/30;
    int days = remaining % 30;
    printf("%d years\n",years);
    printf("%d months\n",months);
    printf("%d days\n",days);
    
    return 0;
}