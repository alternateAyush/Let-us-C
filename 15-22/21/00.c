/*
Decimal to binary conversion.
*/

#include <stdio.h>

int toBinary(int n){
    int res=0;
    int ten=1;
    while(n>0){
        res = (n%2)*ten + res;
        n=n>>1;
        ten*=10;
    }
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Binary form of %d is %d.",n,toBinary(n));
}