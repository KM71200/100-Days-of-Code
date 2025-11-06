//Q30: Write a program to reverse a given number.

#include <stdio.h>
int main()
{
    int x, rev=0 , r;

    printf("Enter no:");
    scanf("%d",&x);

    while (x!=0){
        r= x%10;
        rev= rev*10 + r;
        x=x/10;
    }
    printf("%d",rev);
    
    return 0;
}