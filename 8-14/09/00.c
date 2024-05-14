/*
Understanding pointers
*/

#include <stdio.h>

int main()
{
    int i, *j, **k;
    i = 3;
    j = &i;
    k = &j;
    printf("Value of i = i     = %d\n", i);
    printf("Value of i = *(&i) = %d\n", *(&i));
    printf("Value of i = *j    = %d\n", *j);
    printf("Value of i = **k   = %d\n", **k);
    printf("---\n");
    printf("Address of i = Value of j = &i     = %u\n", &i);
    printf("Address of i = Value of j = j      = %u\n", j);
    printf("Address of i = Value of j = *(&j)  = %u\n", *(&j));
    printf("Address of i = Value of j = *k     = %u\n", *k);
    printf("Address of i = Value of j = **(&k) = %u\n", **(&k));
    printf("---\n");
    printf("Address of j = Value of k = &j    = %u\n", &j);
    printf("Address of j = Value of k = k     = %u\n", k);
    printf("Address of j = Value of k = *(&k) = %u\n", *(&k));
    printf("---\n");
    printf("Address of k = &k = %u\n", &k);
    int *a;
    char *b;
    float *c;
    printf("Size of a(int*), b(char*), c(float*) = %d, %d, %d\n",sizeof(a),sizeof(b),sizeof(c));
    return 0;
}