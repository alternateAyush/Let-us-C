/*
(d) A record contains name of cricketer, his age, number of test
matches that he has played and the average runs that he has
scored. Create an array of structures to hold records of 20 such
cricketers and then write a program to read these records and
arrange them in ascending order by average runs. Use the qsort( )
standard library function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void fun()
// {
//     float f, *ff = &f;
// }

struct Player
{
    char name[20];
    int age;
    int matches;
    float avg;
};

int cmp(const void *p1, const void *p2)
{
    return (((struct Player *)p1)->avg - ((struct Player *)p2)->avg);
}

int main()
{
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    struct Player arr[n];
    int dh;
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", &arr[i].name);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter age: ");
        scanf("%d", &arr[i].age);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter number of test matches: ");
        scanf("%d", &arr[i].matches);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter average runs scored: ");
        scanf("%f", &arr[i].avg);
        while ((dh = getchar()) != '\n')
            ;
    }
    qsort((struct Player *)arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("\n%d. Name: %20s, Age: %2d, Matches: %5d, Average: %10.2f", i + 1, arr[i].name, arr[i].age, arr[i].matches, arr[i].avg);
    }
    return 0;
}