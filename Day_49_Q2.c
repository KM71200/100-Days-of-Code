//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], last[200];
    int i = 0, start = 0, len;

    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ' || str[i] == '\n') {
            strcpy(last, &str[i + 1]);
            break;
        }
    }

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n') {
            if (&str[i + 1] != last)
                printf("%c.", str[i + 1]);
        }
    }

    printf(" %s", last);
    return 0;
}
