/*
Write a program that will read a line and delete from it all
occurrences of the word ‘the’.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100];
    printf("Enter line: ");
    gets(s);
    int n = strlen(s);
    char ns[n + 1];
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 't' || s[i] == 'T')
        {
            if ((i == 0 || s[i - 1] == ' ') && (i + 1 < n && s[i + 1] == 'h') && (i + 2 < n && s[i + 2] == 'e'))
            {
                i += 2;
                continue;
            }
        }
        j++;
        ns[j] = s[i];
    }
    j++;
    ns[j] = '\0';
    printf("Line after deleting all occurrences of 'the':\n%s", ns);
    return 0;
}