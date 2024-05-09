/*
A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int m=0,temp=n;
    while(temp>0){
        m = m*10 + temp%10;
        temp=temp/10;
    }
    if(n==m){
        printf("The number %d and its reverse %d are equal.\n",n,m);
    }else{
        printf("The number %d and its reverse %d are not equal.\n",n,m);
    }
    return 0;
}