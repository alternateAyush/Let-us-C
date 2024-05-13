/*
Population of a town today is 100000. The population has increased
steadily at the rate of 10% per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade.
*/

#include <stdio.h>

int main(){
    int p = 100000;
    printf("Town's population in year %d: %d\n",0,p);
    for(int i=1; i<10; i++){
        p = p + p*0.1;
        printf("Town's population in year %d: %d\n",i,p);
    }
    return 0;
}