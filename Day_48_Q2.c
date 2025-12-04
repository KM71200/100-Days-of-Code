//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

void reverse(char *s, int start, int end) {
    while (start < end) {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
