//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter first no.:");
    scanf("%d",&x);
    printf("Enter Second no.:");
    scanf("%d",&y);
    printf("Before:%d %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After Swap: %d %d",x,y);
    return 0;

}
