/*

*/
#include <stdio.h>

int main()
{
    unsigned int n,m;
    scanf("%x %x", &n,&m);
    printf("%d %d %d\n", n,m,m-n);
    printf("%x %x %x", n,m,m-n);

    return 0;
}