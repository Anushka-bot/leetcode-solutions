#include "stdio.h"
void printArray(int *arr, int len){
    int i;
    for(i = 0;i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void moveZeroes(int* nums, int numsSize){
    int i, noZero = 0;
    for (i = 0; i < numsSize; i++)
        if(nums[i]){
            nums[noZero] = nums[i];
            noZero++;
        }
    while (noZero < numsSize){
        nums[noZero] = 0;
        noZero++;
    }
}

int main(){
    int arr[] = {1,5,0,2,3,0,4,5,0};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    moveZeroes(arr, len);
    printArray(arr, len);
    return 0;
}