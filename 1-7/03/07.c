/*
Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions) 
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x,y,r,x1,y1;
    printf("Center of the circle (x,y) = ");
    scanf("%d %d",&x,&y);
    printf("Radius of the circle r = ");
    scanf("%d",&r);
    printf("Point A (x,y) = ");
    scanf("%d %d",&x1,&y1);
    float d = sqrt(pow(x-x1,2)+pow(y-y1,2));
    if(d==r){
        printf("Point (%d,%d) is on the circle with center (%d,%d) & radius %d.\n",x1,y1,x,y,r);
    }else if(d<r){
        printf("Point (%d,%d) is inside circle with center (%d,%d) & radius %d.\n",x1,y1,x,y,r);
    }else{
        printf("Point (%d,%d) is outside circle with center (%d,%d) & radius %d.\n",x1,y1,x,y,r);
    }
    return 0;
}