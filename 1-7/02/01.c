/*
If a five digit number is input through keyboard,
write a program to calculate the sum of its digits.
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter five digit number: ");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum+= (n%10);
        n=n/10;
    }
    printf("Sum of digits = %d.",sum);
    return 0;
}