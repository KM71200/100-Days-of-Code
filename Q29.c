//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    int n;
    long fact=1;

    printf("Enter a no:");
    scanf("%d",&n);

    if (n<0){
        printf("Factorial can't be calcualted!");
    }

    else{
        for (int i=1 ; i<=n ; i++){
        fact = fact*i;
        }
    }
    printf("%d!=%d",n,fact);
    return 0;
}   

