/*
*/

#include <stdio.h>

int main(){
    extern int y;
    printf("%d\n",y);
    y=9;
    return 0;
}
int y=10;