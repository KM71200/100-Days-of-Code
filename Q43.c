/*Q43: Write a program to check if a number is a strong number.

A strong number is a positive integer where the sum of the factorials of its individual digits equals the number itself

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>
int main()
{
    int n , temp , fact, sum=0 , rem;
    printf("Enter a no:");
    scanf("%d" , &n);
    temp = n;
    
    while (n!=0){
        rem = n%10;
        fact = 1;
        for (int i=1 ; i<=rem; i++){
            fact = fact*i;
        }
        sum = sum + fact;
        n= n/10;
        
    }

    if (sum == temp){
        printf("%d is a strong no",temp);
    }
    else{
        printf("%d is not a strong no",temp);
    }
  
}