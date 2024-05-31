/*
a signed char we should use the format specifier %hhd.
Similarly, to get numerical output of an unsigned char we should use %hhu.
*/

#include <stdio.h>

int main()
{
    short a;
    int b;
    long c;
    long long d;
    printf("Size of short    : %d\n", sizeof(a));
    printf("Size of int      : %d\n", sizeof(b));
    printf("Size of long     : %d\n", sizeof(c));
    printf("Size of long long: %d\n", sizeof(d));
    return 0;
}