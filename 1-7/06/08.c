/*
Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight.
*/

#include <stdio.h>

int main(){
    for(int i=0; i<24; i++){
        if(i==0){
            printf("12 midnight\n");
        }
        else if(i<12){
            printf("%d A.M.\n",i);
        }else if(i>12){
            printf("%d P.M.\n",i%12);
        }else if(i==12){
            printf("12 noon\n");
        }
    }
    return 0;
}