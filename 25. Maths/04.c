// print prime factors of a number

#include <stdio.h>

// O(sqrt(n))
void printPrimeFactors(int n)
{
    if (n <= 1)
        return;
    for (int i = 2; i * i <= n; i++)
    {
        while ((n % i) == 0)
        {
            printf("%d ", i);
            n = (n / i);
        }
    }
    if (n > 1)
    {
        printf("%d", n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Prime factors of %d are:\n",n);
    printPrimeFactors(n);
    return 0;
}