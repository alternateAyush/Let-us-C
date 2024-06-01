/*
Write a program that stores a set of names of individuals and
abbreviates the first and middle name to their first letter.
*/

#include <stdio.h>
#include <string.h>

void func(int n, char arr[n][50], char arr2[n][50])
{
    for (int i = 0; i < n; i++)
    {
        // printf("%s ", arr[i]);
        int temp[2];
        int count = 0;
        for (int j = 0; j < (int)strlen(arr[i]); j++)
        {
            if (arr[i][j] == ' ')
            {
                temp[count] = j;
                count++;
            }
        }
        int k = 0;
        arr2[i][k++] = arr[i][0];
        arr2[i][k++] = ' ';
        int lastIndex = temp[0];
        if (count == 2)
        {
            arr2[i][k++] = arr[i][temp[0] + 1];
            arr2[i][k++] = ' ';
            lastIndex = temp[1];
        }
        for (int j = lastIndex + 1; arr[i][j] != '\0'; j++)
        {
            arr2[i][k] = arr[i][j];
            k++;
        }
        arr2[i][k] = '\0';
        printf("%d %s \n", i, arr2[i]);
    }
    return;
}

int main()
{
    int n = 4;
    printf("Numbers of names to enter: ");
    scanf("%d", &n);
    fflush(stdin);
    char arr[n][50];
    for (int i = 0; i < n; i++)
    {
        printf("Enter full name: ");
        gets(arr[i]);
        fflush(stdin);
    }
    char arr2[n][50];
    func(n, arr, arr2);
    return 0;
}