//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    int p, n, t, SI;
    float r, Amt, CI;

    printf("Enter Principle amount:");
    scanf("%d",&p);

    printf("Enter the Rate:");
    scanf("%f",&r);

    printf("Enter the time(in years):");
    scanf("%d",&t);


    SI= (p*r*t)/100;

    Amt= p * pow((1+r/100),t);

    CI= Amt-p;

    printf("Simple Interest: %d , Compound Interest: %f",SI,CI);
    return 0;








}
