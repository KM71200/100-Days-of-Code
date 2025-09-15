//Q30: Write a program to reverse a given number.

#include <stdio.h>
int main()
{
    int x,y;

    printf("Enter no:");
    scanf("%d",&x);

    for (int i=1; i<=x ; --i){
        printf("%d",i);
    }
    return 0;
}