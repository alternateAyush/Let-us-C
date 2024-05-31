#include <stdio.h>
#include <math.h>
int main()
{
    int i, x[10], y[10];
    float sum = 0;
    printf("\nEnter the coordinates for the points: ");
    for (i = 0; i <= 9; i++)
    {
        printf("\nX[ %d ] = ", i + 1);
        scanf("%d", &x[i]);
        printf("Y[ %d ] = ", i + 1);
        scanf("%d", &y[i]);
    }
    for (i = 0; i <= 8; i++)
        sum = sum + sqrt(pow((x[i + 1] - x[i]), 2) + pow((
                                                             y[i + 1] - y[i]),
                                                         2));
    printf("\nDistance of the last point from the first point = %.2f\n", sum);
    return 0;
}