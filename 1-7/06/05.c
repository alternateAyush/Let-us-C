/*

*/

#include <stdio.h>

int main(){
    printf("Pythagorean Triplets with sides<30:\n");
    int count=0;
    for(int i=1; i<30; i++){
        for(int j=i; j<30; j++){
            for(int k=j; k<30; k++){
                if(i*i+j*j==k*k){
                    count++;
                    printf("%d. (%d,%d,%d)\n",count,i,j,k);
                }
            }
        }
    }
    return 0;
}