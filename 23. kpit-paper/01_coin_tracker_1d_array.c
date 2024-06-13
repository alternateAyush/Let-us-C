#include <stdio.h>

int coinTracker(int target, int n, int *arr,int *res)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            res[0]=1;
            res[1]=mid;
            return;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    res[0]=0;
    res[1]=low;
    return ;
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
    int target;
    scanf("%d", &target);
    int res[2];
    coinTracker(target, n, arr, res);
    if (res[0] == 0)
    {
        printf("Coin should be inserted in index = %d \n", res[1]);
    }
    else
    {
        printf("Coin exists at index = %d\n", res[1]);
    }
    return 0;
}