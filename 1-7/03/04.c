/*
Write a program to find the absolute value of a number entered 
through the keyboard. 
*/

#include <stdio.h>

int main(){
    int x;
    printf("Enter the number = ");
    scanf("%d",&x);
    printf("Absolute value of %d is = ",x);
    if(x>=0){
        printf("%d.\n",x);
    }else{
        printf("%d.\n",-1*x);
    }
    return 0;
}