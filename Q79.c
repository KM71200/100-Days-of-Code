//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for (int d = 0; d < rows + cols - 1; d++) {

        int start_row;

        if (d < cols)
            start_row = 0;             
        else
            start_row = d - cols + 1;   

        for (int i = start_row; i < rows; i++) {
            int j = d - i;  
            if (j < cols && j >= 0)
                printf("%d ", matrix[i][j]);
        }
    }

    printf("\n");
    return 0;
}
