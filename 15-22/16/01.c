/*
Write a program to delete all vowels from a sentence. Assume that 
the sentence is not more than 80 characters long. 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[81];
    printf("Enter string: ");
    gets(str);
    char nStr[81];
    int j=-1;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
        str[i]=='a'||str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            continue;
        }
        j++;
        nStr[j]=str[i];
    }
    printf("String after removing all vowels:\n %s",nStr);
    return 0;
}