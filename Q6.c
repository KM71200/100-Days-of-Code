//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter first no.:");
    scanf("%d",&x);
    printf("Enter Second no.:");
    scanf("%d",&y);
    printf("Before:%d %d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("After Swap: %d %d",x,y);
    return 0;

}
