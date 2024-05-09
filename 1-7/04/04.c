/*
The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the bmi table:
*/

#include <stdio.h>

int main()
{
    float wt,ht;
    printf("Person's weight (kg): ");
    scanf("%f",&wt);
    printf("Person's height (m): ");
    scanf("%f", &ht);
    float bmi = wt/(ht*ht);
    printf("BMI: %f, Category: ",bmi);
    if(bmi<=15){
        printf("Startvation.\n");
    }else if(bmi<=17.5){
        printf("Anorexic.\n");
    }else if(bmi<=18.5){
        printf("Underweight.\n");
    }else if(bmi<=24.9){
        printf("Ideal.\n");
    }else if(bmi<=29.9){
        printf("Overweight.\n");
    }else if(bmi<=39.9){
        printf("Obese.\n");
    }else{
        printf("Morbidly Obese.\n");
    }
    return 0;
}