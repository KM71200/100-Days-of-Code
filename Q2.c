#include<stdio.h>

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

int main(){
    int a,b,sum,diff,prod,quot;
    //int s,d,p,q;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second no");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf("Sum:%d \nDifference:%d \nProduct:%d \nQuotient:%d",sum,diff,prod,quot);
    return 0;
}