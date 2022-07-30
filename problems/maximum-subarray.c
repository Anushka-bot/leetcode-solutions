#include "stdio.h"


int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    int sum = 0;

    for(int i = 0; i < numsSize; i++) {
        if(sum < 0)
            sum = 0;
        sum += nums[i];
        if(sum > max)
            max = sum;
    }
    return max;
}

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int len = sizeof(arr) / sizeof(arr[0]);   
    printf("%d\n",maxSubArray(arr, len));
    return 0;
}