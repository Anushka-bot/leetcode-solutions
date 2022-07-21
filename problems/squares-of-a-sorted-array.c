#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int low = 0, high = numsSize - 1, target = high;
    *returnSize = numsSize;
    int *newArr = (int *) malloc(sizeof(int) * numsSize);

    while (low <= high) {
        if (pow(nums[high], 2) > pow(nums[low],2)){
            newArr[target] = pow(nums[high], 2);
            high--;
        }
        else{
            newArr[target] = pow(nums[low], 2);
            low++;
        }
        target--;
    }
    return newArr;
}
void printArray(int *arr, int len){
    int i;
    for(i = 0;i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main(){
    int nums[] = {-10, -5, -2, 0, 3, 5, 8};
    int len = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int *newArr = sortedSquares(nums, len, &returnSize);
    printArray(newArr, len);


    printArray(nums, len);


    
    return 0;
}