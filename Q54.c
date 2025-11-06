/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


*/

#include <stdio.h>
int main()
{
    for (int i=0 ; i<4 ; i++){
        
        for (int k=1 ; k<=4-i-1 ; k++){
            printf(" ");

        }
        
    
        //for (int k)
        for (int j=1 ; j<=2*i+1 ; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int m=0 ; m<3 ; m++){
        for (int s=1 ; s<=m+1 ; s++){
            printf(" ");
        }
        for (int j=5 ; j>=2*m+1 ; j--){
            printf("*");
        }
        printf("\n");
    }
    
}