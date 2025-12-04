#include <stdio.h>

int main() {
    char str[100];
    int len = 0, isPal = 1;

    printf("Enter a string: ");
    scanf("%s", str);


    while (str[len] != '\0') {
        len++;
    }


    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }

    if (isPal)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
