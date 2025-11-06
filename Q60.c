//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int arr[n];

    for (int i=0 ; i<n ; i++){
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    int pos , neg , zero;
    pos = neg = zero = 0;

    for (int i=0 ; i<n ; i++){
        if (arr[i] < 0){
            neg++;
        }

        else if (arr[i] > 0){
            pos++ ;
        } 

        else{
            zero++;
        }
    }
    
    printf("Positive:%d\n", pos);
    printf("Negative:%d\n", neg);
    printf("Zero:%d\n", zero);
}