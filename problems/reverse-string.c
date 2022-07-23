#include "stdio.h"
#include "string.h"

void reverseString(char* s, int sSize){
    int start = 0;
    char tmp;
    sSize--;
    while (start < sSize) {
        tmp = s[start];
        s[start] = s[sSize];
        s[sSize] = tmp;
        start++;sSize--;
    }
}


int main(){
    char str[] = "Hello Abinash";
    char *ptr = str;
    int len = strlen(ptr);
    reverseString(ptr, len);
    printf("%s",str);
    return 0;
}