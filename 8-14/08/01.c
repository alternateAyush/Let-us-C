/*
Any year is entered through the keyboard. Write a function to 
determine whether the year is a leap year or not. 
*/

#include <stdio.h>

int isLeapYear(int yr){
    if((yr%400==0) || (yr%100!=0 && yr%4==0)){
        return 1;
    }
    return 0;
}

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(isLeapYear(year)){
        printf("%d is a leap year.\n",year);
    }else{
        printf("%d is not a leap year.\n",year);
    }
}