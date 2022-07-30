#include "stdio.h"
#include "stdlib.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int diff, i, j;
    int *newArr = (int*)malloc(sizeof(int) * 2);
    for (i = 0; i < numsSize; i++) {
        diff = target - nums[i];
        for (j = i + 1; j < numsSize; j++) {
            if (diff == nums[j]) {
                newArr[0] = i;
                newArr[1] = j;
                return newArr;
            }
        }
    }
    return NULL;
}

int main() {
    int rsize;
    int arr[] = {2,7,11,15};
    int len = sizeof(arr) / sizeof(arr[0]);
    int* newArr = twoSum(arr, len, 9, &rsize);
    printf("%d %d ", newArr[0], newArr[1]);
    return 0;
}