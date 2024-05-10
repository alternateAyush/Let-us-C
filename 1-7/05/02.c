/*
Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number.
*/

#include <stdio.h>

int main(){
    printf("Armstrong numbers between 1 to 500 are:\n");
    for(int i=1; i<=500; i++){
        int temp=i;
        int sum=0;
        while(temp>0){
            int r = temp%10;
            sum += (r*r*r);
            temp=temp/10;
        }        
        if(sum==i){
            printf("%d, ",i);
        }
    }
    return 0;
}