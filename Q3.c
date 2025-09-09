#include <stdio.h>
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

int main()
{
    int L, B, A, P;
    printf("Enter Length:");
    scanf("%d",&L);
    printf("Enter Breadth:");
    scanf("%d",&B);
    A=L*B;
    P=2*(L+B);
    printf("Area:%d \nPerimeter:%d",A, P);
    return 0;
    
}