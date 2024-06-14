// binary search

#include <stdio.h>
#include <stdlib.h>

int comparator(const void *p1,const void *p2){
    return (*(const int*)p1-*(const int*)p2);
}

int binarySearch(int n,int arr[],int key){
    int low=0,high=n-1;
    while(low<=high){
        int mid=((low+high)/2);
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    qsort(arr,n,sizeof(arr[0]),comparator);
    int idx=binarySearch(n,arr,key);
    if(idx==-1){
        printf("%d not found.",key);
    }else{
        printf("%d found at index %d.",key,idx);
    }
    return 0;
}