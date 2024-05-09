/*
Check whether the triangle is equilateral, isosceles, scalene or right-angled triangle.
*/

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Sides A, B, C = ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Given triangle is ");
    if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
        printf("right-angled");
    }else if(a==b && b==c){
        printf("equilateral");
    }else if(a==b || b==c || a==c){
        printf("isoceles");
    }else{
        printf("scalene");
    }
    printf(" triangle.\n");
    printf("%d %d %d",a,b,c);
    return 0;
}