/*
Write a program to print all the ASCII values and their equivalent 
characters using a while loop. The ASCII values vary from 0 to 255. 
*/

#include <stdio.h>

int main(){
    for(int i=0; i<256; i++){
        char c = i;
        printf("ASCII of character %c is %d.\n",c,i);
    }
    return 0;
}