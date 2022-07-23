// int romanToInt(char* str) {
//     int answer = 0;
//     char lastChar;
//     while (*str != '\0') {
//         switch (*str) {
//             case 'M':
//                 answer += lastChar == 'C' ? 900 : 1000;
//                 break;
//             case 'D':
//                 answer += lastChar == 'C' ? 900 : 500;
//             case 'C':
//                 answer += lastChar == 'X' ? 90 : 100;
//                 break;
//             case 'L':
//                 answer += lastChar == 'X' ? 40 : 50;
//                 break;
//             case 'X':
//                 answer += lastChar == 'I' ? 9 : 10;
//                 break;
//             case 'V':
//                 answer += lastChar == 'I' ?: 5;
//                 break;
//             case 'I':
//                 answer += 1;
//                 break;
//         }
//         lastChar = *str;
//         str++;
//     }
//     return answer;
// }

int romanToInt(char* str) {
    int answer = 0;
    char lastChar = 0;
    while (*str != '\0') {
        switch (*str) {
            case 'M':
                answer += (lastChar == 'C') ? 800 : 1000;
                break;
            case 'D':
                answer += (lastChar == 'C') ? 300 : 500;
                break;
            case 'C':
                answer += (lastChar == 'X') ? 80 : 100;
                break;
            case 'L':
                answer += (lastChar == 'X') ? 30 : 50;
                break;
            case 'X':
                answer += (lastChar == 'I') ? 8 : 10;
                break;
            case 'V':
                answer += (lastChar == 'I') ? 3 : 5;
                break;
            case 'I':
                answer++;
                break;
        }
        lastChar = *str;
        str++;
    }
    return answer;
}

#include "stdio.h"

int main() {
    printf("%d", romanToInt("MXVII"));
    return 0;
}