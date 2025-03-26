/*
According to Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.
*/

#include <stdio.h>
#include <math.h>
#define pi 3.1415926359

int isLeap(int n){
    return ((n%4==0 && n%100!=0) || (n%400==0));
}

int main(){
    int n;
    scanf("%d ",&n);
    int days=0;
    for(int i=1; i<n; i++){
        if(isLeap(i)==1){
            days+=366;
        }else{
            days+=365;
        }
    }
    int dayOfWeek = days%7;
    printf("01/01/%d is ",n);
    switch(dayOfWeek){
        case 0: 
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        case 6:
            printf("Sunday");
            break;
    }
    return 0;
}


