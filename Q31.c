//: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>
int main(){
    
    int n, r, b=0 , p=1;

    printf("Enter no:");
    scanf("%d",&n);

    if (n==0){
        printf( "0");
        return 0;
    }

    for (; n ; n=n/2){
        r=n%2;
        b= b + p*r;
        p= p*10;
        
    }
    printf("%d",b);
    return 0;

}
