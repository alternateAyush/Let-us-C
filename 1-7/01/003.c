/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
shorter sides. Thus, paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.
*/

#include <stdio.h>

int main()
{
    int n = 9;
    int length[9];
    int width[9];
    length[0] = 1189, width[0] = 841;
    printf("A0 length = %d, width = %d.\n", length[0], width[0]);
    for (int i = 1; i < n; i++)
    {
        length[i] = width[i - 1];
        width[i] = length[i - 1] / 2;
        printf("A%d length = %d, width = %d.\n", i, length[i], width[i]);
    }
    return 0;
}