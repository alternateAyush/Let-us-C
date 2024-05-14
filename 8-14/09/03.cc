/*
Define a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0. Would you get any advantage if you develop these functions to
work on call be reference principle?
*/

#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float ab = distance(x1, y1, x2, y2);
    float bc = distance(x2, y2, x3, y3);
    float ac = distance(x1, y1, x3, y3);
    float s = (ab + bc + ac) / 2.0;
    return sqrt(s * (s - ab) * (s - bc) * (s - ac));
}

int pointPos(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
    float abc = area(x1, y1, x2, y2, x3, y3);
    float pbc = area(x, y, x2, y2, x3, y3);
    float apc = area(x1, y1, x, y, x3, y3);
    float abp = area(x1, y1, x2, y2, x, y);
    float total = pbc + apc + abp;
    printf("abc = %f, total = %f\n",abc,total);
    if (abs(abc - total) <= 0.0009)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int x1,y1,x2,y2,x3,y3,x,y;
    printf("Co-ordinates of vertex A (x,y) = ");
    scanf("%d %d",&x1,&y1);
    printf("Co-ordinates of vertex B (x,y) = ");
    scanf("%d %d",&x2,&y2);
    printf("Co-ordinates of vertex C (x,y) = ");
    scanf("%d %d",&x3,&y3);
    printf("Co-ordinates of point P (x,y) = ");
    scanf("%d %d",&x,&y);
    if(pointPos(x1,y1,x2,y2,x3,y3,x,y)){
        printf("Point P lies inside triangle ABC.\n");
    }else{
        printf("Point P lies outside triangle ABC.\n");
    }
    return 0;
}