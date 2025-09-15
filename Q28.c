//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main()
{
    int n,p=1;

    printf("Enter value for n:");
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++ ){
        if (i%2 == 0){
            p*=i;
        }
    }
    printf("Product of even is:%d",p);
    return 0; 
}