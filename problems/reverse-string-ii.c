#include "stdio.h"

void reverse(char *s, int start, int end) { 
    char tmp;
    while (start < end) {
        tmp = s[start];
        s[start++] = s[end];
        s[end--] = tmp;
    }
}



char * reverseStr(char * s, int k){
    int i = 0;

    while (s[i] != '\0') {
        printf("%c",s[i]);
        i++;
    }

    return s;
}

int main(){
    char str[] = "Hello Abinash Karmakar";
    printf("%s\n",str);
    reverseStr(str,3);
    reverse(str,0,4);
    printf("%s\n",str);
    
    return 0;
}