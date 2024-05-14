/*
*/

#include <stdio.h>

void convert(int kg,float *g,float *ton,float *lbs){
    *g = kg*1000.0;
    *ton = kg/1000.0;
    *lbs = kg*2.20462;
    return;
}

int main(){
    int kg;
    float g,ton,lbs;
    printf("Enter weight in kg: ");
    scanf("%d",&kg);
    convert(kg,&g,&ton,&lbs);
    printf("%d kg = %f g = %f ton = %f lbs\n",kg,g,ton,lbs);    
    return 0;
}