/*
c)
An automobile company has serial number for engine parts starting
from AA0 to FF9. The other characteristics of parts are year of
manufacture, material and quantity manufactured.
(1) Create a structure to store information corresponding to a
part.
(2) Write a program to retrieve information on parts with serial
numbers between BB1 and CC6.
*/
#include <stdio.h>
#include <string.h>

struct Parts
{
    unsigned int sr;
    int yr;
    char material[30];
    int qty;
};

void retrieveInfo(int n, struct Parts arr[n])
{
    printf("Parts with serial numbers between BB1 and CC6:\n");
    int count = 0;
    unsigned int low = 2993, high = 3270;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].sr >= low && arr[i].sr <= high)
        {
            count++;
            printf("%d\n", count);
            printf("Serial Number       : %x\n", arr[i].sr);
            printf("Year of Manufacture : %d\n", arr[i].yr);
            printf("Material            : %s\n", arr[i].material);
            printf("Quantity            : %d\n", arr[i].qty);
        }
    }
    printf(" count: %d", count);
    return;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    struct Parts arr[n];
    int dh;
    for (int i = 0; i < n; i++)
    {
        printf("Enter sr number: ");
        scanf("%x", &arr[i].sr);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter year of manufacture: ");
        scanf("%d", &arr[i].yr);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter material: ");
        scanf("%s", &arr[i].material);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter quantity: ");
        scanf("%d", &arr[i].qty);
        while ((dh = getchar()) != '\n')
            ;
    }
    retrieveInfo(n, arr);
    return 0;
}