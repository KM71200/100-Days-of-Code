//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0};
    int i;

    scanf("%s", s1);
    scanf("%s", s2);

    for (i = 0; s1[i] != '\0'; i++)
        freq[s1[i] - 'a']++;

    for (i = 0; s2[i] != '\0'; i++)
        freq[s2[i] - 'a']--;

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
