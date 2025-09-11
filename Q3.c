#include <stdio.h>
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

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
