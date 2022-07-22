#include "stdio.h"
void printArray(int *arr, int len){
    int i;
    for(i = 0;i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int removeElement(int* nums, int numsSize, int val){
    int i = 0, j = numsSize - 1;
    while (i <= j){
        if (nums[i] == val)
            swap(nums + i , nums + j--);
        else
            i++;
    }
    return j + 1;
}


int main(){
    int arr[] = {1,5,4,6,4,9,8,7,3,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    removeElement(arr, len, 4);
    printArray(arr, len);

    return 0;
}