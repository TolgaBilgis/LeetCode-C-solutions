#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    int n = rowIndex + 1;
    int* row = calloc(n, sizeof(int));
    *returnSize = n;
    row[0] = 1;

    for (int i = 1; i < n; i++) {
        row[i] = 1;
        for (int j = i - 1; j > 0; j--) {
            row[j] += row[j - 1];
        }
    }

    return row;
}
