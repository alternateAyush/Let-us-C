/*
The area of a triangle can be computed by the sine law when 2
sides of the triangle and the angle between them are known.
Area = (1/2) ab sin (angle)
Given the following 6 triangular pieces of land, write a program to
find their area and determine which is largest.

a = 137.4 155.2 149.3 160.0 155.6 149.7
b = 80.9 92.62 97.93 100.25 68.95 120.0
angle = 0.78 0.89 1.35 9.00 1.25 1.75
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float angle[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float n = 6;
    float largest = 0.0;
    for (int i = 0; i < n; i++)
    {
        float area = 0.5 * a[i] * b[i] * sin(angle[i]);
        printf("Area of Plot %d = %f\n", i + 1, area);
        if (area > largest)
        {
            largest = area;
        }
    }
    printf("Largest plot area = %f", largest);
    return 0;
}