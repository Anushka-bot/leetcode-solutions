#include "stdio.h"
int max(int a, int b){
    return a > b ? a : b;
}

int rob(int* nums, int numsSize){
    int rob1 = 0 , rob2 = 0, tmp;
    for(int i = 0; i < numsSize; i++) {
        tmp = max(nums[i] + rob1, rob2);
        rob1 = rob2;
        rob2 = tmp;
    }
    return rob2;
}

int main(){
    int arr[] = {2,7,9,3,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d", rob(arr, len));

    return 0;
}