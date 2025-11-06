
//Q55 Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
int main()
{
    int n ;
    printf("Enter no");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++){
        int count=0;
        
        for (int j=2 ; j<i ; j++){
            if (i%j == 0){
                count++;
                break;
            }

        }
        if (count == 0){
            printf("%d ",i);
        }
    }
    return 0; 
}