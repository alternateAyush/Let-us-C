// count 0's in factorial

#include <stdio.h>

int countZeros(int n){
    int count=0;
    for(int i=5; i<=n; i=i*5){
        count += (n/i);
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Zero's in %d! = %d",n,countZeros(n));
}