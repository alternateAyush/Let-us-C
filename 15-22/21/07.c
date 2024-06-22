/*
Write a program to scan an 8-bit number into a variable and check
whether its 3rd, 6th and 7th bit is on.
*/

#include <stdio.h>

void checkBits(int n)
{
    char s[] = "00000000";
    int idx = 7;
    while (n>0)
    {
        if ((n & 1) !=0)
        {
            s[idx] = '1';
        }
        idx--;
        n = n>>1;
    }
    printf("Given number: %s\n",s);
    printf("3rd bit: %c\n", s[8-3]);
    printf("6th bit: %c\n", s[8-5]);
    printf("7th bit: %c\n", s[8-7]);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 256 || n < 0)
    {
        printf("Invalid input");
    }
    else
    {
        checkBits(n);
    }
    return 0;
}