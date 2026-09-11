#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* result = malloc((digitsSize + 1) * sizeof(int));

    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    for (int i = digitsSize - 1; i >= 0; i--) {
        if (result[i] < 9) {
            result[i]++;
            *returnSize = digitsSize;
            return result;
        }
        result[i] = 0;
    }

    for (int i = digitsSize; i > 0; i--) {
        result[i] = result[i - 1];
    }

    result[0] = 1;
    *returnSize = digitsSize + 1;
    return result;
}
