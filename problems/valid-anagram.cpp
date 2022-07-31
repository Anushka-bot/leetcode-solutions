#include "stdio.h"

bool isAnagram(char* s, char* t) {
    int hash[26] = {0};
    int i = 0;

    while (s[i]) hash[s[i++] - 'a']++;
    i = 0;
    while (t[i]) hash[t[i++] - 'a']--;

    for (i = 0; i < 26; i++)
        if (hash[i] != 0) return false;
    return true;
}

int main() {
    char s[] = "abinash";
    char t[] = "bianahs";
    printf("%d ", isAnagram(s, t));
    return 0;
}