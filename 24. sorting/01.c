// insertion sort
// stable
#include <stdio.h>

// O(n^2)
void insertionSort(int n,int *arr){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
        // for(int k=0; k<n; k++){
        //     printf("%d ",arr[k]);
        // }
        // printf("\n");
    }
    return;    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(n,arr);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}