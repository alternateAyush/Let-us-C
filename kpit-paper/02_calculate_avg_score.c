#include <stdio.h>

void calculateAverageScores(int n, int m, int scores[][m], float *avg, int i, int j, float sum)
{
    if (i == n)
    {
        return;
    }
    if (j == m)
    {
        avg[i] = (sum / m);
        calculateAverageScores(n, m, scores, avg, i + 1, 0, 0.0);
        return;
    }
    calculateAverageScores(n, m, scores, avg, i, j + 1, sum + scores[i][j]);
    return;
}

int main()
{
    int scores[][4] = {

        {78, 89, 92, 87},

        {90, 87, 78, 95},

        {88, 92, 80, 84}

    };
    float avg[] = {0.0, 0.0, 0.0};
    calculateAverageScores(3, 4, scores, avg, 0, 0, 0.0);
    for (int i = 0; i < 3; i++)
    {
        printf("Avg score of student %d is %.2f.\n", i + 1, avg[i]);
    }
    return 0;
}