//Q33: Write a program to check if a number is an Armstrong number.  

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int x, org, temp, rem, numb=0, count =0;
    printf("Enter no:");
    scanf("%d", &x);
    org = temp = x;

    while(x!=0){  
        x=x/10;
        count++;
    }

    while (org!=0){
        rem = org%10;
        numb += (int)(pow(rem, count)+0.5);
        org = org/10;
      
    }
    if (numb == temp){
        printf("%d is an Armstrong no",numb);
    }
    else{
        printf("%d is not an Armstrong no",numb);
    }
        
    



}