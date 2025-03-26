/*
Given three variables x, y, z, write a function to circularly shift their
values to right. In other words, if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.
 */

#include <stdio.h>

void circularShift(int *a,int *b,int *c)
{
    int t=*a;
    *a = *c;
    *c = *b;
    *b = t;
    return;
}

unsigned int main()
{
    int x, y, z;
    printf("Enter x,y,z: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Before, x = %d, y = %d, z = %d\n", x, y, z);
    circularShift(&x, &y, &z);
    printf("After,  x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}