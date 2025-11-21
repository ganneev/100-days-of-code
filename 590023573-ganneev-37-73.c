/*Q73: Find the sum of each row of a matrix and store it in an array.*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int row_sums[rows];
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        row_sums[i] = 0;
        for (j = 0; j < cols; j++) {
            row_sums[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i, row_sums[i]);
    }
    return 0;
}