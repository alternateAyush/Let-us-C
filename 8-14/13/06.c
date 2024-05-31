/*
For the following set of sample data, compute the standard deviation and the mean.
-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
*/

#include <stdio.h>
#include <math.h>

int main(){
    float arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    float mean=0;
    for(int i=0; i<n; i++){
        mean+=arr[i];
    }
    mean = mean/n;
    printf("Mean: %f\n",mean);
    float sum=0;
    for(int i=0; i<n; i++){
        sum += pow(arr[i]-mean,2.0);
    }
    float sd = sqrt(sum)/n;
    printf("Standard deviation: %f",sd);
    return 0;
}

