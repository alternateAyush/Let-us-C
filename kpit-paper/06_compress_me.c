#include <stdio.h>
#include <string.h>

void compressMe(char s[100], char *compressed)
{
    int count[256];
    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        int k = (int)s[i];
        count[k]++;
    }
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int k = (int)s[i];
        char c = s[i];
        if (count[k] > 0)
        {
            compressed[j++] = c;
            compressed[j++] = '0' + count[k];
            count[k] = 0;
        }
    }
    printf("%d\n", j);
    // compressed[j]='\0';
    printf("%s\n", compressed);
    return;
}

int main()
{
    char s[100];
    scanf("%s", &s);
    char compressed[200];
    compressMe(s, compressed);
    return 0;
}