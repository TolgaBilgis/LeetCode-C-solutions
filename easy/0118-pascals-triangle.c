#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** rows = malloc(numRows * sizeof(int*));
    *returnColumnSizes = malloc(numRows * sizeof(int));
    *returnSize = numRows;

    for (int i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;
        rows[i] = malloc((i + 1) * sizeof(int));
        rows[i][0] = 1;
        rows[i][i] = 1;
        for (int j = 1; j < i; j++) {
            rows[i][j] = rows[i - 1][j - 1] + rows[i - 1][j];
        }
    }

    return rows;
}
