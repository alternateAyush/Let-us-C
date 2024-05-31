/*
A positive integer is entered through the keyboard, write a function
to find the binary equivalent of this number:
(1) Without using recursion
(2) Using recursion
*/

#include <stdio.h>

int toBinary(int n)
{
    int b = 0;
    int ten = 1;
    while (n > 0)
    {
        b = ((n % 2) * ten) + b;
        n /= 2;
        ten *= 10;
    }
    return b;
}

int toBinaryR(int n){
    if(n==0) return 0;
    return toBinaryR(n/2)*10 + n%2;
}

int main()
{
    int n;
    printf("Enter decimal = ");
    scanf("%d", &n);
    printf("Binary = %d\n", toBinary(n));
    printf("Binary = %d\n", toBinaryR(n));
    return 0;
}