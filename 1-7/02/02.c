/*
Write a program to receive cartesian co-ordinates (x,y) of a point
and convert them into polar co-ordinates (r,o).
*/

#include <stdio.h>
#include <math.h>

int main(){
    float x,y;
    printf("Enter cartesian co-ordinates.\n");
    printf("x , y = ");
    scanf("%f %f",&x,&y);
    float r = sqrt(x*x+y*y);
    float o = atan(y/x);
    printf("Distance from origin r = %f.\n",r);
    printf("Angle O = %f.\n",o);
    return 0;
}