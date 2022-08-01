#include "stdio.h"

int hammingWeight(uint32_t n) {

    int ans = 0;
    while(n){
        n &= n - 1;
        ans+=1;
    }
    return ans;
}
int main(){
    
    return 0;
}