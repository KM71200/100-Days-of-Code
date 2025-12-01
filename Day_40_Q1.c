//Q81: Count characters in a string without using built-in length functions.
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>
int countlength(char str[]);
int main()
{
    char str[100];
    printf("Enter string:");
    fgets(str,100,stdin);
    printf("Length of String:%d",countlength(str));

}

int countlength(char str[])
{
    int count=0;
    for (int i=0 ; str[i]!='\0' ; i++){
        count++ ;
    }
    return count-1;
}