/*
Implement the Insertion Sort algorithm.
*/

#include <stdio.h>


void insertionSort(int n,int *arr){
    for(int i=1; i<n; i++){
       int j=i-1;
       int curr=arr[i];
       while(j>=0 && arr[j]>curr){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=curr;
    }
}

int main(){
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    insertionSort(n,arr);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
