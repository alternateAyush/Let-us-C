/*
Write a program to count the number of occurrences of any two
vowels in succession in a line of text.
*/

#include <stdio.h>

int isVowel(char x)
{
    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        return 1;
    }
    return 0;
}

int func(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isVowel(s[i]) == 1 && s[i + 1] != '\0' && isVowel(s[i + 1]) == 1)
        {
            printf("%c%c ", s[i], s[i + 1]);
            count++;
        }
    }
    printf("\n");
    return count;
}

int main()
{
    char s[100];
    printf("Enter line: ");
    gets(s);
    int n = func(s);
    printf("Occurences of successive two vowels: %d\n", n);
    return 0;
}