// kth bit is set or not

#include <stdio.h>

int iskset(int n,int k){
    int x=1<<(k-1);
    if((n&x)!=0){
        return 1;
    }
    return 0;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    if(iskset(n,k)==1){
        printf("%dth bit is set.",k);
    }else{
        printf("%dth bit not is set.",k);

    }
    return 0;
}