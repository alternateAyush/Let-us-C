// Quick Sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int giveRandomNumber(int low, int high)
{
    return (rand() % (high - low + 1)) + low;
}

int partition(int arr[],int low,int high){
    int idx = giveRandomNumber(low,high);
    // printf("random pivot index: %d\n",idx);
    int temp=arr[idx];
    arr[idx]=arr[low];
    arr[low]=temp;
    int pivot=arr[low];
    int i=low-1,j=high+1;
    while(1){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(j<=i) break;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return j;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
    return;
}

int main()
{
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quickSort(arr,0,n-1);
    // printf("Partition: %d\n",partition(arr,0,n-1));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}