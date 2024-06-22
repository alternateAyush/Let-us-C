// count set bits

#include <stdio.h>

// int countSetBits(int n)
// {
//     int k = 1;
//     int count = 0;
//     while (k <= n)
//     {
//         if ((k & n) != 0)
//         {
//             count+=1;
//         }
//         k = k*2;
//     }
//     return count;
// }

// better O(set bits)

int countSetBits(int n){
    int count=0;
    while(n>0){
        n= n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Number of set bit in %d = %d", n, countSetBits(n));
    return 0;
}