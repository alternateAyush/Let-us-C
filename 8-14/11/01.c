/*
*/

#include <stdio.h>

int main(){
    extern int y;
    y=9;
    printf("%d\n",y);
    return 0;
}
int y=10;