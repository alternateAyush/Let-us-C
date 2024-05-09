/*
Given a point (x, y), write a program to find out if it lies on X-axis, Y-axis or origin. 
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    printf("x, y = ");
    scanf("%d %d",&x,&y);
    printf("Point (%d,%d) lies ",x,y);
    if(x==0 && y==0){
        printf("on origin.\n");
    }else if(x==0){
        printf("on y-axis.\n");
    }else if(y==0){
        printf("on x-axis.\n");
    }else{
        printf("neither on x-axis nor on y-axis.\n");
    }
    return 0;
}