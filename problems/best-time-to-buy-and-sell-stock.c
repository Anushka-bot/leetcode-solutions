#include "stdio.h"

int maxProfit(int* prices, int pricesSize) {
    int min = prices[0], profit = 0, max = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min) 
            min = prices[i];
        profit = prices[i] - min;
        if (max < profit)
             max = profit;
    }
    return max;
}

int main() {
    int arr[] = {1, 7, 8, 9, 5, 4, 9, 6, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d", maxProfit(arr, len));
    return 0;
}