#include "stdio.h"
#include "stdlib.h"

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i = 0, j = numbersSize - 1;
    int *returnArr = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;
    while (i < j) {
        if (numbers[i] + numbers[j] == target){
            i++;j++;
            break;
        }
        if (numbers[i] > target || numbers[i] + numbers[j] > target)
            j--;
        else
            i++;
    }
    returnArr[0] = i;
    returnArr[1] = j;
    return returnArr;
}

int main(){
    int arr[] = {1,2,4,7,9,11,15};
    int returnSize;
    int len = sizeof(arr) / sizeof(arr[0]);
    int *sumArr = twoSum(arr, len, 8,&returnSize);
    printf("%d %d" , sumArr[0], sumArr[1]);

    return 0;
}