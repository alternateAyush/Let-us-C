/*
﻿

Ramanujan number (1729) is the smallest number that can be
expressed as sum of two cubes in two different ways-1729 can be
expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such
numbers up to a reasonable limit.
*/

#include <stdio.h>

int main()
{
    int n = 100;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 1; k < n; k++)
            {
                for (int l = 1; l < n; l++)
                {
                    if (i == j || i == k || i == l || j == k || j == l || k == l)
                    {
                        continue;
                    }
                    int a = (i * i * i) + (j * j * j);
                    int b = (k * k * k) + (l * l * l);
                    if (a == b)
                    {
                        count++;
                        printf("%d. %d^3 + %d^3 = %d^3 + %d^3 = %d = %d\n", count, i, j, k, l, a, b);
                    }
                }
            }
        }
    }
    printf("Hello");
    return 0;
}