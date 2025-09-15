//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
    int cp, sp, P, L;
    int p_percent, l_percent;
    
    printf("Enter Cost price:");
    scanf("%d",&cp);

    printf("Enter Selling Price");
    scanf("%d",&sp);

    if (sp>cp){
        P= sp-cp;
        p_percent =(P*100)/cp;
        printf("Profit: %d%%\n ", p_percent);
    }

    else if (cp>sp){
        L= cp-sp;
        l_percent =(L*100)/cp;
        printf("Loss: %d%%\n ",l_percent);
    }

    else{
        printf("No profit or loss");

    }
    return 0;
}