//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main()
{
    int n, rem , temp=0, place=1000;
    printf("Enter no:");
    scanf("%d", &n);

    while (n!=0){
        rem = n%10;
        temp = temp + rem*place;
        place = place/10;
        n = n/10;


    }
    printf("%d", temp);


}