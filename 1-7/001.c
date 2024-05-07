/*
Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.
*/

#include <stdio.h>

int main()
{
    float fa, cen;
    printf("City temperature in fahrenheit = ");
    scanf("%f", &fa);
    cen = ((fa - 32) * 5) / 9;
    printf("City temperature in centigrade = %f\n", cen);
    return 0;
}