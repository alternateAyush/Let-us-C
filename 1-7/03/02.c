/*
If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three. 
*/

#include <stdio.h>

int main(){
    int r,s,a;
    printf("Age of Ram = ");
    scanf("%d",&r);
    printf("Age of Shyam = ");
    scanf("%d",&s);
    printf("Age of Ajay = ");
    scanf("%d",&a);
    if(s<=r){
        if(s<=a){
            printf("Shyam is youngest ");
        }else{
            printf("Ajay is youngest ");
        }
    }else{
        if(r<=a){
            printf("Ram is youngest ");
        }else{
            printf("Ajay is youngest ");
        }
    }
    printf("among Ram %d, Shyam %d and Ajay %d.",r,s,a);
    return 0;
}