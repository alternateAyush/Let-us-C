/*
There are three pegs labeled A, B and C. Four disks are placed on
peg A. The bottom-most disk is largest, and disks go on decreasing
in size with the topmost disk being smallest. The objective of the
game is to move the disks from peg A to peg C, using peg B as an
auxiliary peg. The rules of the game are as follows:
(1) Only one disk may be moved at a time, and it must be the top
disk on one of the pegs.
(2) A larger disk should never be placed on the top of a smaller
disk.
Write a program to print out the sequence in which the disks should
be moved such that all disks on peg A are finally transferred to peg
C.
*/
#include <stdio.h>

void hanoi(int n,int start,int end){
    char c='A'-1;
    if(n<1) return;
    if(n==1){
        printf("%c -> %c\n",c+start,c+end);
    }else{
        int other = 6 - (start+end);
        hanoi(n-1,start,other);
        printf("%c -> %c\n",c+start,c+end);
        hanoi(n-1,other,end);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    hanoi(n,1,3);
    return 0;
}