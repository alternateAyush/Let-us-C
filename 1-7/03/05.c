/*
Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 
is greater than its perimeter. 
*/

#include <stdio.h>

int main(){
    int l,b;
    printf("Length and Breadth of reactangle = ");
    scanf("%d %d",&l,&b);
    int area = l*b, perimeter = 2*(l+b);
    if(area>perimeter){
        printf("Area reactangle is greater than its perimeter %d > %d.\n",area,perimeter);
    }else{
        printf("Perimeter reactangle is greater than its area %d > %d.\n",perimeter,area);
    }
    return 0;
}