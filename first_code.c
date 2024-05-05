/* calculate simple interest*/

#include <stdio.h>

int main()
{
    int p, n;
    float rate, si;
    printf("Values of p, n, rate ");
    scanf("%d%d%f", &p, &n, &rate);
    si = (p * rate * n) / 100;
    printf("%f\n", si);
    return 0;
}