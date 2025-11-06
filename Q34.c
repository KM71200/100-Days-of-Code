//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter no:");
    scanf("%d", &n);

    if (n<=1){
        printf("%d is Not Prime",n);
    }
    else{
        for (int i=2 ; i<=n ; i++){
            if (n%i == 0){
                printf("%d is Not Prime", n);
                break;
            }
            
            else {
                printf("%d is Prime",n);
                //break;
            }
        }

    }
    return 0;
}