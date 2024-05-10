/*
 Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered. 
*/

#include <stdio.h>

int main(){
    int n;
    char c;
    int pos=0,neg=0,zero=0;
    while(1){
        printf("Enter n: ");
        scanf("%d",&n);
        if(n>0){
            pos++;
        }else if(n<0){
            neg++;
        }else{
            zero++;
        }
        fflush ( stdin ) ;
        printf("Do you want to continue? (y/n) ");
        scanf("%c",&c);
        if(c=='N' || c=='n') break;
    }
    printf("Positive: %d, Negative: %d, Zero: %d.",pos,neg,zero);
    return 0;
}