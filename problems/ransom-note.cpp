#include "stdio.h"


bool canConstruct(char * ransomNote, char * magazine){
    int counter[26] = {0};
    int i = 0;

    while (magazine[i]){
        counter[magazine[i] - 'a']++;
        i++;
    }

    i = 0;
    while (ransomNote[i]) { 
        if(counter[ransomNote[i] - 'a'] == 0)
            return false;
        counter[ransomNote[i] - 'a']--;
        i++;
    }
    return true;
}

int main(){
    char str1[] = "";
    char str2[] = "";

    printf("%d ",canConstruct(str1, str2));
    return 0;
}