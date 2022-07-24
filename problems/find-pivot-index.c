#include "stdio.h"

int pivotIndex(int* nums, int numsSize) {
    int i,sum = 0;

    for(i = 0; i < numsSize; i++)
        sum += nums[i];

    int leftSum = 0, rightSum = 0;
    for(i = 0; i < numsSize; i++){
        rightSum = sum - leftSum - nums[i];
        if(leftSum == rightSum)
            return i;
        leftSum += nums[i];
    }
    if(i == numsSize) return -1;

    return i;
}


int main(){
    int arr[] = {1,2,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",pivotIndex(arr,len));




    return 0;
}