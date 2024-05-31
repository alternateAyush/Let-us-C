/*
Given an array p[ 5 ], write a function to shift it circularly left by two
positions. Thus, if the original array is { 15, 30, 28, 19, 61 } then after
shifting it will be { 28, 19, 61, 15, 30 } Call this function for a 4 x 5
matrix and get its rows left shifted.
*/

#include <stdio.h>

void swapping(int arr[4][5], int start, int end, int i)
{
    while (start < end)
    {
        arr[i][start] ^= arr[i][end];
        arr[i][end] ^= arr[i][start];
        arr[i][start] ^= arr[i][end];
        start++;
        end--;
    }
    return;
}

void func(int arr[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        swapping(arr, 0, 4, i);
        swapping(arr, 3, 4, i);
        swapping(arr, 0, 2, i);
    }
    return;
}

int main()
{
    int arr[4][5];
    printf("Enter array elements:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("4*5 Array after left rotation by 2:\n");
    func(arr);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}