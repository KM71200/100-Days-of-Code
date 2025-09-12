//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

//b*b-4*a*c    >0 real and distinct =0 real and equal  <0 complex
#include <stdio.h>
#include <math.h>

int main()
{   int a,b,c,D;
    int r1 ,r2;

    printf("Enter coefficients of equation a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    D= (b*b)-(4*a*c);

    if (D>0){
        r1= (-b + sqrt(D)) / (2*a);
        r2= (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different: %d and %d \n",r1,r2);
    }

    else if (D==0){
        r1= -b / (2*a);
        printf("Roots are real and equal: %d \n",r1);
    }

    else{
        printf("Roots are Complex \n");
    }
    return 0;

}