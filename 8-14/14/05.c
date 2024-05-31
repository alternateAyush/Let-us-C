/*
Write a program to find if a square matrix is symmetric.
*/

#include <stdio.h>

int func(int n,int arr[][n]){
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n/2; j++){
            if(arr[i][j]!=arr[j][i]) return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (func(n, arr))
    {
        printf("Yes, given matrix is symmetric.\n");
    }
    else
    {
        printf("Given matrix is not symmetric.\n");
    }
    return 0;
}