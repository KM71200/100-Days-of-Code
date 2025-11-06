/*Q42: Write a program to check if a number is a perfect number. 

a positive integer that is equal to the sum of its proper positive divisors, 
which are all the divisors of the number excluding itself.     

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>
int main()
{
    int n , sum=0;
    printf("Enter a no:");
    scanf("%d", &n);

    for (int i=1 ; i<n ; i++){
        if (n%i == 0){
            sum += i;
        }

    }
    
    if (sum == n){
        printf("%d is a perfect no", n);
    }

    else{
        printf("%d not a perfect no",n);
    }
    return 0;

}
