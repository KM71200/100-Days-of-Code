//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no.:");
    scanf("%d",&a);

    if (a%2==0){
        printf("%d is Even \n",a);
    }
    else{
        printf("%d is Odd",a);
    }
    return 0;
}
