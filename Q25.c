//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{
    int a,b;
    char o;

    printf("Enter a b and operator:");
    scanf("%d %d %c",&a,&b,&o);


    switch (o){

        case '+': printf("%d\n",a+b);
        break;

        case '-': printf("%d\n",a-b);
        break;

        case '*': printf("%d\n",a*b);
        break;

        case '/':
            if (b!=0){
                printf("%d\n",a/b);
            }

            else{
                printf("Zero division error!");
            }
        break;

        case '%':
            if (b!=0){
                printf("%d\n",a%b);
            }
                
            else{
                printf("Error! Modulo division by zero");
            }
        break; 
        
        default: printf("Invalid Operator:");
    }
}