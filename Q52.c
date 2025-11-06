/*Q52: Write a program to print the following pattern:

*

*
*
*


*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>
int main()
{   
    for (int i=1 ; i<=5; i++){
        if (i%2 == 0){
            continue;
        }      
        for (int j=1; j<=i ; j++){
            printf("*");
            printf("\n");
        }
        printf("\n");          
    }
    

    for (int k=3 ; k>=1 ; k--){
        if (k==2){
            continue;
        }
        for (int j=1 ; j<=k ; j++){
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
    
}