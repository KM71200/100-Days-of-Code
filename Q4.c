#include <stdio.h>

//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/


int main()
{
    int r;
    float A , C ;
    printf("Enter radius:");
    scanf("%d", &r);
    A = 3.14 * r*r;
    C= 2 * 3.14 * r;
    printf("Area: %f, 3: %f", A,C);
    return 0;
}