/*
(a) In an inter-college competition, various sports like cricket, 
basketball, football, hockey, lawn tennis, table tennis, carom and 
chess are played between different colleges. The information 
regarding the games won by a particular college is stored in bit 
numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8 of an integer variable game. The 
college that wins in 5 or more than 5 games is awarded the 
Champion of Champions trophy. If a number representing the bit 
pattern mentioned above is entered through the keyboard, then 
write a program to find out whether the college won the Champion 
of the Champions trophy or not, along with the names of the games 
won by the college. 
*/

#include <stdio.h>

int countWins(int n){
    int count=0;
    int bit=1;
    char arr[][30]={"Cricket","Basketball","Football","Hockey","Lawn Tennis","Table Tennis","Carom","Chess"};
    for(int i=0; i<8; i++){
        printf("%-20s:",arr[i]);
        if((n&bit)!=0){
            count++;
            printf("1\n");
        }else{
            printf("0\n");
        }
        bit=bit<<1;
    }
    return count;
}

int main(){
    int game;
    scanf("%d",&game);
    int n=countWins(game);
    printf("Result: %d wins\n",n);
    if(n>=5){
        printf("College won the Champion of the Champions trophy.");
    }else{
        printf("College lost the Champion of the Champions trophy.");
    }
    return 0;
}