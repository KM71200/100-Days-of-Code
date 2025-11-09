//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b,sum,diff,prod,quot;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second no");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf("Sum:%d \nDifference:%d \nProduct:%d \nQuotient:%d\n",sum,diff,prod,quot);
    return 0;
}
