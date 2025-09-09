//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    int h,m,s, T_sec;

    printf("Enter Seconds:");
    scanf("%d",&T_sec);

    h= T_sec/3600;
    m= (T_sec % 3600)/60;
    s= T_sec%60;

    printf("Time in H:M:S format is-  %d:%d:%d", h,m,s);
    return 0;

}