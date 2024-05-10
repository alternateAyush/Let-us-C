/*
Decimal to octal.
*/

#include <stdio.h>

int main(){
    int x,n;
    printf("Enter the number: ");
    scanf("%d",&x);
    n=x;
    int octal=0;
    int tens=1;
    while(n>0){
        octal = (n%8)*tens + octal;
        tens*=10;
        n/=8;
    }
    printf("%d in octal is %d.\n",x,octal);
    return 0;
}