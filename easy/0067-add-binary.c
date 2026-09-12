#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int i = (int)strlen(a) - 1;
    int j = (int)strlen(b) - 1;
    int capacity = (i > j ? i : j) + 3;
    char *result = malloc((size_t)capacity);
    int k = capacity - 2;
    int carry = 0;

    result[capacity - 1] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (char)('0' + (sum & 1));
        carry = sum >> 1;
    }

    int start = k + 1;
    memmove(result, result + start, (size_t)(capacity - start));
    return result;
}
