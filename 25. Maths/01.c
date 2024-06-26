// factorial of a number

#include <stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
    return 0;
}