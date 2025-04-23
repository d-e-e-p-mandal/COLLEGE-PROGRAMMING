#include <stdio.h>
#include <stdlib.h>

int **matrixAddition(int r, int l, int arr1[][l], int arr2[][l], int *returnRow, int **returnCol) {
    int **res = (int **)malloc(r * sizeof(int *));
    *returnCol = (int *)malloc(r * sizeof(int)); // Allocate memory for returnCol
    *returnRow = r;

    for (int i = 0; i < r; i++) {
        res[i] = (int *)malloc(l * sizeof(int));
        (*returnCol)[i] = l; // Set the number of columns for each row
        for (int j = 0; j < l; j++) {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    return res;
}

int main() {
    int arr[2][2] = {{1, 2}, {10, 11}};
    int brr[2][2] = {{1, 3}, {10, 12}};
    int row, *col;
    int **result = matrixAddition(2, 2, arr, brr, &row, &col);

    printf("Result:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            printf("%3d", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < row; i++) {
        free(result[i]);
    }
    free(result);
    free(col);

    return 0;
}