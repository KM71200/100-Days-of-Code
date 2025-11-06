//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main()
{
    int a , b , rem, p;
    printf("Enter a and b");
    scanf("%d %d", &a , &b);
    p = a*b;
    
    while (b!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    printf("LCM is :%d", p/a);
    
}