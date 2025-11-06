//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>
int main()
{
    int n, key;
    printf("Enter Size of array:");
    scanf("%d", &n);

    int arr[n];

    
    for (int i=0 ; i<n ; i++){
        printf("Enter sorted element:");
        scanf("%d", &arr[i]);
        printf("%d", arr[i]);
    }

    printf("Enter element to search");
    scanf("%d", &key);

    int l=0 , h=n-1 , mid , f=-1;
    while (l <=h){
            mid = (l+h)/2;
            
            if (arr[mid] == key){
                f = mid;
                break;
            }
            else if  (arr[mid] < key){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        
        }
    if (f != -1){
            printf("Found at index %d\n", f);
        }
    else{
            printf("-1\n");
        }
    return 0;

    
}