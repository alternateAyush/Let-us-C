/*
Write a program to print the following pattern:
          1
       2     3
    4     5     6
 7     8     9     10

*/

#include <stdio.h>

int main()
{
    int n = 10;
    int line = 1;
    int k = 1;
    while (k < 10)
    {
        for (int i = 0; i < n; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < line; i++)
        {
            printf("%d     ", k);
            k++;
        }
        printf("\n");
        line++;
        n -= 3;
    }
    return 0;
}