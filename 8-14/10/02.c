/*
Write a recursive function to obtain the sum of first 25 natural 
numbers.
*/

#include <stdio.h>

int naturalSum(int n){
    if(n==1) return 1;
    return n+naturalSum(n-1);
}

int main(){
    printf("Sum of first 25 natural numbers: %d\n",naturalSum(25));
    return 0;
}