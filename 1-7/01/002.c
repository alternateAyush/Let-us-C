/*
The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.
*/

#include <stdio.h>

int main(){
    float l,b,r,areaR,areaC,perimeter,circumference;
    float pi=3.1415926359;
    printf("Length, breadth, radius = ");
    scanf("%f %f %f", &l, &b, &r);
    areaR = l*b;
    perimeter = 2*(l+b);
    areaC = pi*r*r;
    circumference = 2 * pi * r;
    printf("Perimeter of reactangle = %f\n",perimeter);
    printf("Area of reactangle = %f\n",areaR);
    printf("Circumference of circle = %f\n",circumference);
    printf("Area of circle = %f\n",areaC);
    return 0;

}