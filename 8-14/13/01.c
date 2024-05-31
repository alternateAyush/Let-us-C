/*
Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.
*/

#include <stdio.h>

int main()
{
    int n = 25;
    int arr[n];
    int pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter 25 numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("\n");
    printf("The given array contains:\n");
    printf("%d positive numbers.\n", pos);
    printf("%d negetive numbers.\n", neg);
    printf("%d even numbers.\n", even);
    printf("%d odd numbers.\n", odd);
    return 0;
}