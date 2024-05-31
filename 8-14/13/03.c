/*
Write a program using pointers to find the smallest number in an
array of 25 integers.
*/

#include <stdio.h>
#include <limits.h>

int smallestNumber(int *n, int *arr)
{
    int s = INT_MAX;
    for(int i=0; i<*n; i++){
        if(arr[i]<s){
            s=arr[i];
        }
    }
    return s;
}

int main()
{
    int n = 25;
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Smallest number: %d\n", smallestNumber(&n, arr));
    return 0;
}