/*
When interest compounds q times per year at an annual rate of r % for n years, 
the principal p compounds to an amount a as per the following formula
a=p(1+r/q)^nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
*/

#include <stdio.h>
#include <math.h>

int main(){
    for(int i=0; i<10; i++){
        int p,n;
        float a,r,q;
        printf("Enter p, r, n, q: ");
        scanf("%d %f %d %f",&p,&r,&n,&q);
        a = p*pow(1.0+r/(q*100.0),n*q);
        printf("Amount a = %f\n",a);
    }
    return 0;
}