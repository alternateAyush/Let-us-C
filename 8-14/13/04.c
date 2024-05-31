/*
Implement the Insertion Sort algorithm.
*/

#include <stdio.h>



int main(){
    int n=25;
    int arr[n];
    printf("Enter %d numbers: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    sortIt(n,arr);
    for(int i=0; i<n; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}