//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0}; 

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0){
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10; 
    }


    int maxCount = 0, mostDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", mostDigit);

    return 0;
}
