//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter size of first array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int B[m];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    int C[n + m];

    for (int i = 0; i < n; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < m; i++) {
        C[n + i] = B[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
