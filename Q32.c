//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>
int main(){
    int n, rev=0, rem , org;

    printf("Enter no:");
    scanf("%d",&n);
    org = n;

    //for (; n)

    while (n!=0){
        rem = n%10;
        rev = rev*10 + rem ;
        n=n/10;
    }

        if (org==rev){
            printf("%d is a Palindrome",rev);
        }
        
        else {
            printf("Not a Palindrome",org);
        }
        
    

}