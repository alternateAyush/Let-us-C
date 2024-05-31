#include <stdio.h>
#include <math.h>

float calDistance(int *x,int *y){
    float d=0.0;
    for(int i=1; i<10; i++){
        float a = pow(x[i]-x[i-1],2.0);
        float b = pow(y[i]-y[i-1],2.0);
        d += sqrt(a+b);
    }
    return d;
}

int main(){
    int x[10],y[10];
    for(int i=0; i<10; i++){
        printf("input x%d, y%d: ",i+1,i+1);
        scanf("%d %d",&x[i],&y[i]);
    }
    printf("Distance from (x1,y1) to (x10,y10): %f\n",calDistance(x,y));
    return 0;;
}