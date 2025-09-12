//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
int main()
{
    char alpha;
    
    printf("Enter Character:");
    scanf("%c",&alpha);

    if (alpha=='a' || alpha=='A'){
        printf("Vowel");
    }

    else if (alpha=='e' || alpha=='E'){
        printf("Vowel");
    }

    else if (alpha=='i' || alpha=='I'){
        printf("Vowel");
    }

    else if (alpha=='o' || alpha=='O'){
        printf("Vowel");
    }

    else if (alpha=='u' || alpha=='U'){
        printf("Vowel");
    }

    else {
        printf("Consonant");
    }
    return 0 ;
}
