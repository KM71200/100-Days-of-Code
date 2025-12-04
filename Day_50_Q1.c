//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20], dd[3], mm[3], yyyy[5], month[4];
    scanf("%s", date);

    dd[0] = date[0];
    dd[1] = date[1];
    dd[2] = '\0';

    mm[0] = date[3];
    mm[1] = date[4];
    mm[2] = '\0';

    yyyy[0] = date[6];
    yyyy[1] = date[7];
    yyyy[2] = date[8];
    yyyy[3] = date[9];
    yyyy[4] = '\0';

    if (strcmp(mm, "01") == 0) strcpy(month, "Jan");
    else if (strcmp(mm, "02") == 0) strcpy(month, "Feb");
    else if (strcmp(mm, "03") == 0) strcpy(month, "Mar");
    else if (strcmp(mm, "04") == 0) strcpy(month, "Apr");
    else if (strcmp(mm, "05") == 0) strcpy(month, "May");
    else if (strcmp(mm, "06") == 0) strcpy(month, "Jun");
    else if (strcmp(mm, "07") == 0) strcpy(month, "Jul");
    else if (strcmp(mm, "08") == 0) strcpy(month, "Aug");
    else if (strcmp(mm, "09") == 0) strcpy(month, "Sep");
    else if (strcmp(mm, "10") == 0) strcpy(month, "Oct");
    else if (strcmp(mm, "11") == 0) strcpy(month, "Nov");
    else if (strcmp(mm, "12") == 0) strcpy(month, "Dec");

    printf("%s-%s-%s", dd, month, yyyy);
    return 0;
}
