//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/
#include <stdio.h>
int main()
{
    char str[100];
    int VCount = 0, Ccount = 0;
    printf("Enter a string in lowercase only!:");
    scanf("%s",str);

    for (int i=0 ; str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i'||str[i]=='o'|| str[i]=='u'){
            VCount++;
        }

        else{
            Ccount++;
        }
    }
    printf("Vowels:%d, Consonants:%d",VCount,Ccount);
}
