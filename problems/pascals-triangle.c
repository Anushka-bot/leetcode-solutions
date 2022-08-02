#include "stdio.h"
#include "stdlib.h"

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int **triangle, i, j;
    *returnSize = numRows;
    *returnColumnSizes = (int**)malloc(sizeof(int*) * numRows);
    
    for (int i = 0; i < numRows; i++) 
        (*returnColumnSizes)[i] = i + 1;

    triangle = (int**)malloc(sizeof(int*) * numRows);

    for (int i = 0; i < numRows; i++) {
        triangle[i] = malloc(sizeof(int) * (i + 1));
        triangle[i][0] = triangle[i][i] = 1;
    }

    for (int i = 2; i < numRows; i++)
        for (int j = 1; j < i; j++)
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];

    return triangle;
}

int** generate2(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;
    *returnColumnSizes = NULL;

    if (numRows == 0) return NULL;

    int** ret = NULL;

    *returnSize = numRows;

    ret = malloc(sizeof(int*) * numRows);
    for (int row = 0; row < numRows; row++) {
        ret[row] = malloc(sizeof(int) * (row + 1));
        ret[row][0] = 1;    // First col is 1
        ret[row][row] = 1;  // Last col is 1
    }

    *returnColumnSizes = malloc(sizeof(int) * numRows);
    for (int row = 0; row < numRows; row++) (*returnColumnSizes)[row] = row + 1;

    /* Middle col calculation */
    for (int row = 2; row < numRows; row++) {
        for (int col = 1; col < row; col++) {
            ret[row][col] = ret[row - 1][col - 1] + ret[row - 1][col];
        }
    }
    return ret;
}

int main() {
    int **returnColSize, returnSize;

    int** newArr = generate(5, &returnSize, returnColSize);

    // for (int i = 0; i < returnSize; i++) {
    //     for (int j = 0; j < returnColSize[i]; j++) printf("%d ",
    //     newArr[i][j]); printf("\n");
    // }
    return 0;
}