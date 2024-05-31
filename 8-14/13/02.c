/*
If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] == arr[n - 1 - i])
        {
            printf("arr[%d] == arr[%d], %d == %d\n", i, n - 1 - i, arr[i], arr[n - 1 - i]);
        }
        else
        {
            printf("arr[%d] != arr[%d], %d != %d\n", i, n - 1 - i, arr[i], arr[n - 1 - i]);
        }
    }
    return 0;
}