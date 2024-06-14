// linear search

#include <stdio.h>

int linearSearch(int n,int arr[],int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
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
    int idx=linearSearch(n,arr,key);
    if(idx==-1){
        printf("%d not found.",key);
    }else{
        printf("%d found at index %d.",key,idx);
    }
    return 0;
}