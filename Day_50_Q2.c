//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int len, i, j, k, index = 0;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            index = 0;
            for (k = i; k <= j; k++)
                sub[index++] = str[k];
            sub[index] = '\0';
            printf("%s", sub);
            if (!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    return 0;
}
