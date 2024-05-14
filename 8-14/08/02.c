/*
A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.
*/

#include <stdio.h>

void printPrimeFactors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n == 1)
            break;
        while (n % i == 0)
        {
            printf("%d, ", i);
            n = n / i;
        }
    }
    return;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printPrimeFactors(n);
    return 0;
}