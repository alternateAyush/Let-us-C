/*
Given an array p[ 5 ], write a function to shift it circularly left by two
positions. Thus, if the original array is { 15, 30, 28, 19, 61 } then after
shifting it will be { 28, 19, 61, 15, 30 } Call this function for a 4 x 5
matrix and get its rows left shifted.
*/

#include <stdio.h>

void swap(int *a,int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

void swapArr(int low,int high,int i,int **arr){
    while(low<high){
        swap(&arr[i][low],&arr[i][high]);
        low++;
        high--;
    }
    return;
}

void shiftLeftByD(int n,int m,int d,int **arr){
    for(int i=0; i<n; i++){
        swapArr(0,m-1,i,arr);
        swapArr(0,m-d-1,i,arr);
        swapArr(m-d,m-1,i,arr);
    }
    return;
}

int main(){
    int n,m,d;
    scanf("%d %d %d",&n,&m,&d);
    int **arr = (int **) malloc(n*sizeof(int *));
    if(arr==NULL){
        printf("failed!!!");
        return 1;
    }
    for(int i=0; i<n; i++){
        arr[i] = (int *) malloc(m*sizeof(int));
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    shiftLeftByD(n,m,d,arr);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}