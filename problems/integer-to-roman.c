#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *intToRoman(int num) {
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romans[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L", "XL", "X",  "IX", "V",  "IV", "I"};
    char  *ans= calloc(16, sizeof(char));
    int i, j;

    for (i = 0; i <= 12; i++) {
        while (num >= numbers[i]) {
            strcat(ans, romans[i]);
            num -= numbers[i];
        }
    }

    return ans;
}

int main() {
    printf("Hello World\n");
    printf("%s", intToRoman(1885));
    return 0;
}