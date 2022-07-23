#include "stdio.h"
#include "stdlib.h"


void printArray(int* arr, int len) {
    int i;
    for (i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
}
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int temp = k, i, j, carry;
    int digitCount = 0, arrSize;
    while (temp) {
        temp /= 10;
        digitCount++;
    }
    arrSize = numSize > digitCount ? numSize : digitCount;
    arrSize++;
    
    int* ans = calloc(arrSize, sizeof(int));

    i = arrSize - 1; j = numSize - 1; carry = 0;
    while (k) {
        if (j >= 0) {
            num[j] += k;
            ans[i] = num[j] % 10;
            k = num[j] / 10;
            j--;
        } else {
            ans[i] = k % 10;
            k /= 10;
        }
        i--;
    }
    while (j >= 0) {
        ans[i] = num[j];
        j--;
        i--;
    }
    *returnSize = arrSize - i - 1;
    return ans + i + 1;
}
int main() {
    int ri;
    int arr[] = {1, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int* newArr = addToArrayForm(arr, len, 913, &ri);
    printArray(newArr, ri);

    return 0;
}