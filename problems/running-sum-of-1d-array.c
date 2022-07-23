#include "stdio.h"
#include "stdlib.h"

void printArray(int* arr, int len) {
    int i;
    for (i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
}

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* arr = malloc(sizeof(int) * numsSize);
    int sum = 0, i;
    *returnSize = numsSize;

    for (i = 0; i < numsSize; i++) {
        sum += nums[i];
        arr[i] = sum;
    }
    return arr;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int r = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(runningSum(arr, len, &r), len);

    return 0;
}
