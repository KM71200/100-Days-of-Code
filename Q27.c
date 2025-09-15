//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int n, sum=0,count=0;
    
    printf("Enter value for n:");
    scanf("%d",&n);

    for (int i=1; count<n; i++){
        if (i%2 !=0){
            sum+=i;
            count+=1;
        }
    }
    printf("Sum of odd = %d\n",sum);
    return 0;
    
}