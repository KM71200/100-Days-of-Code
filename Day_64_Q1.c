//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    int freq[256] = {0};
    int i = 0, j = 0, len, maxLen = 0;

    scanf("%s", s);
    len = strlen(s);

    while (j < len) {
        freq[(int)s[j]]++;
        while (freq[(int)s[j]] > 1) {
            freq[(int)s[i]]--;
            i++;
        }
        if (j - i + 1 > maxLen)
            maxLen = j - i + 1;
        j++;
    }

    printf("%d", maxLen);
    return 0;
}
