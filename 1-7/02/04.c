/*
Wind-chill factor is the felt air temperature on exposed skin due to
wind. The wind-chill temperature is always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^(0.16)
where t is temperature and v is wind velocity. Write a program to 
receive values of t and v and calculate wind-chill factor (wcf).
*/

#include <stdio.h>
#include <math.h>

int main(){
    float t,v,wcf;
    printf("Enter temperature (celsius): ");
    scanf("%f",&t);
    printf("Enter wind velocity (k/h) = ");
    scanf("%f",&v);
    t = (t*9.0)/5.0 + 32;
    v = v*0.621371;
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
    wcf = (wcf-32)*5.0/9.0;
    printf("Wind-chill factor = %f.\n",wcf);
    return 0;

}