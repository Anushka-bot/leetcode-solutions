#include "stdio.h"

int isSubsequence(char* s, char* t) {
    while(*s && *t) {
        if (*s == *t)
            s++;
        t++;
    }
    return !(*s);
}

int main() { 
    printf("%d ", isSubsequence("abc","ahcihchb"));    ;
    return 0; 
}
