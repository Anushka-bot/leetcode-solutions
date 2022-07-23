// #include "stdio.h"
// #include "stdlib.h"

// void printArray(int *arr, int len){
//     int i;
//     for(i = 0;i < len; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// struct SearchTree
// {
//     int val;
//     int count;
//     struct SearchTree* left;
//     struct SearchTree* right;
// };

// struct SearchTree* Insert(struct SearchTree* T, int x, int* count_small)
// {
//     if(T == NULL)
//     {
//         T = (struct SearchTree*)malloc(sizeof(struct SearchTree));
//         T->val = x;
//         T->count = 0;
//         T->left = NULL;
//         T->right = NULL;
//     }
//     else
//     {
//         if(x <= T->val)
//         {
//             T->count++;
//             T->left = Insert(T->left, x, count_small);
//         }
//         else
//         {
//             *count_small = *count_small + T->count + 1;
//             T->right = Insert(T->right, x, count_small);
//         }
//     }
    
//     return T;
// }

// int* countSmaller(int* nums, int numsSize, int* returnSize)
// {
//     *returnSize = numsSize;
//     int *result = (int*)malloc(sizeof(int) * numsSize);
//     struct SearchTree* T = NULL;
    
//     for(int i = numsSize - 1; i >= 0; --i)
//     {
//         int count_small = 0;
//         T = Insert(T, nums[i], &count_small);
//         result[i] = count_small;
//     }
    
//     return result;
// }


// int main(){
//     int arr[] = {5, 6, 1, 3, 1, 1, 8, 9, 7};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int r;
//     printArray(arr, len);
//     printArray(countSmaller(arr, len, &r), len);

//     return 0;
// }