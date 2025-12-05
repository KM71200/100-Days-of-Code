#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z')
            str[i+1] -= 32;
        i++;
    }

    printf("%s", str);
    return 0;
}
