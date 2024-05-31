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

int main(){
    int A[3];
    int B[3];
    int C[3];
    int s=1;
    for(int i=0; i<3; i++){
        A[i]=s;
        s++;
        B[i]=0;
        C[i]=0;
    }
    
    return 0;
}