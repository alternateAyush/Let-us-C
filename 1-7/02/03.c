/*
Write a program to receive values of latitude (L1,L2) and longitude
(G1,G2) in degrees, of two places on the earth and output the 
distance(D) bewteen then in nautival miles 
*/

#include <stdio.h>
#include <math.h>

int main(){
    float L1,L2,G1,G2;
    float pi = 3.14159265359;
    printf("Point A: L1, G1 = ");
    scanf("%f %f",&L1,&G1);
    printf("Point B: L2, G2 = ");
    scanf("%f %f",&L2,&G2);
    L1 = L1*(pi/180);
    G1 = G1*(pi/180);
    L2 = L2*(pi/180);
    G2 = G2*(pi/180);
    float D;
    D = 3963 * acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("Distance in nautical miles = %f",D);
    return 0;
}