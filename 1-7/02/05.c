/*
If the value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float x;
    float pi = 3.14159265359;
    printf("Enter angle = ");
    scanf("%f",&x);
    x = x*(pi/180);
    printf("sin(x) = %f.\n",sin(x));
    printf("cos(x) = %f.\n",cos(x));
    printf("tan(x) = %f.\n",tan(x));
    printf("cot(x) = %f.\n",1/tan(x));
    printf("sec(x) = %f.\n",1/cos(x));
    printf("cosec(x) = %f.\n",1/sin(x));
    return 0;
}