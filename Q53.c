/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>
int main()
{
    for (int i=1 ; i<=9 ; i++){
        if (i%2 ==0){
            continue;
        }
        for (int j=1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int k=7 ; k>=1 ; k--){
        if (k%2 == 0){
            continue;
        }
        for (int j=1 ; j<=k ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}