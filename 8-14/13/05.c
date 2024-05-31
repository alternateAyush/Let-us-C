/*
Write a program which performs the following tasks:
- Initialize an integer array of 10 elements in main( )
- Pass the entire array to a function modify( )
- In modify() multiply each element of array by 3
- Return the control to main() and print the new array elements in main()

*/

#include <stdio.h>

void modify(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 3;
    }
}

int main()
{
    int n = 10;
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    modify(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}