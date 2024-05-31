// Write a program to multiply any two 3 x 3 matrices. 

#include <stdio.h>

void func(int n,int m1[][n],int m2[][n],int pro[][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            pro[i][j]=0;
            for(int k=0; k<n; k++){
                pro[i][j]+=(m1[i][k]*m2[k][j]);
            }
        }
    }
    return;
}

int main(){
    int n=3;
    int m1[n][n],m2[n][n];
    printf("Enter matrix m1:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    fflush(stdin);
    printf("Enter matrix m2:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m2[i][j]);
        }
    }
    int pro[n][n];
    func(n,m1,m2,pro);
    printf("Product of m1 & m2:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }    
    return 0;
}