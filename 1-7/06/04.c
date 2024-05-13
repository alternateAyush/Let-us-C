/*
If x is input through the keyboard, write a program to calculate the
sum of first seven terms of natural log series.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("Enter x = ");
    scanf("%d",&x);
    float sum = 0;
    for(int i=0; i<7; i++){
        float temp = pow((x-1.0)/x,i+1)*(1.0/2.0);
        if(i==0){
            temp*=2.0;
        }
        sum+=temp;
    }
    printf("Sum of first 7 terms = %f\n",sum);
    return 0;
}