/*
Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.
*/

#include <stdio.h>

int main(){
    int c,d;
    printf("Enter c and d = ");
    scanf("%d %d",&c,&d);
    c = c^d;
    d = c^d;
    c = c^d;
    printf("c = %d and d = %d.\n",c,d);
    return 0;
}