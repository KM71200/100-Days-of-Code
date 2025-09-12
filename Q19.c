//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
    int x,y,z;

    printf("Enter First side:");
    scanf("%d",&x);

    printf("Enter Second side:");
    scanf("%d",&y);

    printf("Enter Third side:",&z);
    scanf("%d",&z);


    if (x==y && y==z && z==x){
        printf("It is an Equilateral Triangle \n");
    }

    else if (x==y || y==z || z==x){
        printf("It is an Isosceles triangle \n");
    }

    else if (x!=y && y!=z && z!=x){
        printf("It is a Sclane Triangle \n");
    }
    return 0;
}