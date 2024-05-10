/*

*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter list size n: ");
    scanf("%d",&n);
    fflush(stdin);
    int low,high,ftime=1;
    while(n>0){
        int t;
        scanf("%d",&t);
        // fflush(stdin);
        if(ftime==1){
            low=high=t;
            ftime=0;
        }
        if(low>t){
            low=t;
        }
        if(high<t){
            high=t;
        }
        n--;
    }
    int range = high-low;
    if(range<0) range*-1;
    printf("Range of %d to %d is %d.\n",low,high,range);
    return 0;
}