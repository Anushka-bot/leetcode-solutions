#include "stdio.h"

void printArray(int *arr, int len){
    int i;
    for(i = 0;i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int removeDuplicates(int* nums, int numsSize){
    int i, j = 0;
    for (i = 0; i < numsSize; i++)
        if (nums[i] != nums[j])
            nums[++j] = nums[i];
    return j + 1;
}

int main(){

    int arr[] = {1,1,2,2,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,len);
    removeDuplicates(arr,len);
    printArray(arr,len);
    return 0;
}