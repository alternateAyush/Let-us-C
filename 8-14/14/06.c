// Write a program to add two 6 x 6 matrices.
#include <stdio.h>

void add6x6(int n,int m1[][n],int m2[][n],int sum[][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    return;
}

int main()
{
    int n=6;
    int m1[n][n];
    int m2[n][n];
    printf("Enter m1: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    fflush(stdin);
    printf("Enter m2: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m2[i][j]);
        }
    }
    int sum[n][n];
    printf("Sum of m1 and m2: \n");
    add6x6(n,m1,m2,sum);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}