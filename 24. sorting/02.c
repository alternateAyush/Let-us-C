// selection sort
// unstable
#include <stdio.h>

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIdx = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[maxIdx] < arr[j])
            {
                maxIdx = j;
            }
        }
        int t=arr[maxIdx];
        arr[maxIdx]=arr[n-1-i];
        arr[n-1-i]=t;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}