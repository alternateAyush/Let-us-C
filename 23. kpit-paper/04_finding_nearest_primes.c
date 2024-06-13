#include <stdio.h>

int isPrime(int x)
{
    if (x == 2 || x == 3 || x == 5)
    {
        return 1;
    }
    if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0)
    {
        return 0;
    }
    for (int i = 7; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int squareNumbers(int n, int *arr)
{
    int mini = 10e9+7, maxi = -1*(10e9+7);
    for (int i = 0; i < n; i++)
    {
        arr[i] *= arr[i];
        if (mini > arr[i])
        {
            mini = arr[i];
        }
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    int x = maxi - mini;
    if (isPrime(x) == 1)
    {
        return x;
    }
    int limit = 10e9 + 7;
    for (int i = x + 1; i <= limit; i++)
    {
        if (isPrime(i) == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = squareNumbers(n, arr);
    printf("Squared Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\nNearest Prime = %d", res);
    return 0;
}