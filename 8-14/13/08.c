// For the following set of n data points (x, y), write a program to
// compute the correlation coefficient r, given by
// x = 34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15
// y = 102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65

#include <stdio.h>
#include <math.h>

float computeCoefficient(float *x, float *y)
{
    float r = 0.0;
    float sumX = 0.0;
    float sumY = 0.0;
    float sumXY = 0.0;
    float sumX2 = 0.0;
    float sumY2 = 0.0;
    int n = 11;
    for (int i = 0; i < n; i++)
    {
        sumX += x[i];
        sumY += y[i];
        sumXY += (x[i] * y[i]);
        sumX2 += (x[i] * x[i]);
        sumY2 += (y[i] * y[i]);
    }
    float numerator = sumXY - (sumX * sumY);
    float denomirator = ((n * sumX2) - (sumX * sumX)) * ((n * sumY2) - (sumY * sumY));
    denomirator = sqrt(denomirator);
    printf("%c X   = %f\n", 228, sumX);
    printf("%c Y   = %f\n", 228, sumY);
    printf("%c XY  = %f\n", 228, sumXY);
    printf("%c X^2 = %f\n", 228, sumX2);
    printf("%c Y^2 = %f\n\n", 228, sumY2);
    printf("%c XY - (%c X %c Y) = %f\n", 228, 228, 228, numerator);
    printf("[N%cX^2 - %cX%cX][N%cX^2 - %cY%cY] = %f\n", 228, 228, 228, 228, 228, 228, denomirator);
    r=numerator/denomirator;
    return r;
}

int main()
{
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float r = computeCoefficient(x, y);
    printf("Correlation coefficient r = %f", r);
    return 0;
}