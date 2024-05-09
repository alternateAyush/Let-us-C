/*
i) Hardness must be greater than 50.
ii) Carbon content must be less than 0.7.
iii) Tensile strength must be greater than 5600.
The grades are as follows: 
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 
Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel under 
consideration and output the grade of the steel. 
*/

#include <stdio.h>

int main(){
    float hd,cc,ts;
    printf("Hardness = ");
    scanf("%f",&hd);
    printf("Carbon content = ");
    scanf("%f",&cc);
    printf("Tensile strength = ");
    scanf("%f",&ts);
    int grade=5;
    if(hd>50 && cc<0.7 && ts>5600){
        grade=10;
    }else if(hd>50 && cc<0.7){
        grade=9;
    }else if(cc<0.7 && ts>5600){
        grade=8;
    }else if(hd>50 && ts>5600){
        grade=7;
    }else if(hd>50 || cc<0.7 || ts>5600){
        grade=6;
    }
    printf("Steel is of Grade %d.\n",grade);
    return 0;
}