/*
A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i=2;
    while(n>1){
        while(n>1 && n%i==0){
            printf("%d ",i);
            n/=i;
        }
        i++;
    }
    return 0;
}
