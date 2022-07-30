#include "stdio.h"
#include "stdlib.h"

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *returnArr = (int *)malloc((nums1Size>nums2Size?nums1Size : nums2Size ) * sizeof(int));
    int index = 0;
    int hash[1000] = {0};

    for(int i = 0; i < nums1Size; i++)
        hash[nums1[i]]++;

    for (int i=0; i < nums2Size; i++) {
        if(hash[nums2[i]] > 0){
            returnArr[index++] = nums2[i];
            hash[nums2[i]]--;
        }
    }
    *returnSize = index;
    return returnArr;
}


void printArray(int *arr, int len){
    int i;
    for(i = 0;i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int resize ;
    int arr1[] = {1,2,2,1};
    int arr2[] = {1,2,3};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    int *arr = intersect(arr1, len1, arr2, len2,&resize);


    printArray(arr, resize);

    return 0;
}