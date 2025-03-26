/*
Write a program that will read a line and delete from it all
occurrences of the word ‘the’.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeThe(char s[],int n){
    char temp[200];
    int j=0;
    for(int i=0; i<n; i++){
        if(i<=n-3 && (s[i]=='T' || s[i]=='t') && (s[i+1]=='h' || s[i+1]=='H') && (s[i+2]=='E' || s[i+2]=='e')){
            i+=2;                      
        }else{
            temp[j++]=s[i];
        }
    }
    strcpy(s,temp);
    return;
}

int main(){
    char s[200];
    fgets(s,200,stdin);
    int n=strlen(s);
    removeThe(s,n);
    printf("%s",s);
    return 0;
}