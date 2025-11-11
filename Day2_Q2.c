//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
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
