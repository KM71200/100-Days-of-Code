//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float T, F;
    printf("Enter Temperature:");
    scanf("%f",&T);
    F = (T*9/5)+32;
    printf("Temperature in Fahrenheit:%f",F);
    return 0;


}

