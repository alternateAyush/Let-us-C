// print all primes from 1 to N.
// Seive of Eratosthenes

#include <stdio.h>

void printPrimes(int n){
    if(n<2) return;
    int arr[n+1];
    for(int i=0; i<=n; i++){
        arr[i]=1;
    }
    for(int i=2; i<=n; i++){
        if(arr[i]==1){
            printf("%d ",i);
            for(int j=i*2; j<=n; j+=i){
                arr[j]=0;
            }
        }
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Prime numbers from 1 to %d:\n",n);
    printPrimes(n);
    return 0;
}