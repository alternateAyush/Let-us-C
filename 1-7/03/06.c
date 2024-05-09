/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
check if the three points fall on one straight line.
(y2 – y1)/(x2 – x1) = (y3 – y2)/(x3 – x2)
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Point A (x,y) = ");
    scanf("%d %d",&x1,&y1);
    printf("Point B (x,y) = ");
    scanf("%d %d",&x2,&y2);
    printf("Point C (x,y) = ");
    scanf("%d %d",&x3,&y3);
    float lhs = (y2-y1)/(x2-x1);
    float rhs = (y3-y2)/(x3-x2);
    if(lhs==rhs){
        printf("Point A, B & C fall on one straight line.");
    }else{
        printf("Point A, B & C do not fall on one straight line.");
    }
    return 0;
}