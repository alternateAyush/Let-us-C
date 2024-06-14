// print all divisors of N

#include <stdio.h>

// O(sqrt(n))
void printAllDivisors(int n){
    int i=1;
    for(; i*i<n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    for(; i>0; i--){
        if(n%i==0 ){
            printf("%d ",n/i);
        }
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Divisors of %d are:\n",n);
    printAllDivisors(n);
    return 0;
}