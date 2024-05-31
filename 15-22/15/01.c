/*
If the string "Alice in wonder land" is fed to the following scanf( )
statement, what will be the contents of arrays str1, str2, str3 and 
str4? 
scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ; 
*/

#include <stdio.h>

int main(){
    char s1[20],s2[20],s3[20],s4[20];
    scanf("%s%s%s%s",&s1,&s2,&s3,&s4);
    printf("%s %s %s %s",s1,s2,s3,s4);
    return 0;
}