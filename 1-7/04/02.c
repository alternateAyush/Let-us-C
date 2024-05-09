/*
Convert rgb (red-green-black) to cmyk (cyan-magenta-yellow-black)
*/

#include <stdio.h>

int main(){
    int r,g,b;
    float c,m,y,k,w;
    printf("rbg() = ");
    scanf("%d %d %d",&r,&g,&b);
    if(r>=b){
        if(r>=g){
            w = r/255.0;
        }else{
            w=g/255.0;
        }
    }else{
        if(b>=g){
            w=b/255.0;
        }else{
            w=g/255.0;
        }
    }
    c = (w-r/255.0)/w;
    m = (w-g/255.0)/w;
    y = (w-b/255.0)/w;
    k = 1-w;
    printf("rgb(%d,%d,%d) = cmyk(%f,%f,%f,%f)",r,g,b,c,m,y,k);
    return 0;
}