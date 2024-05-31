/*
A dequeue is an ordered set of elements in which elements may be
inserted or retrieved from either end. Using an array simulate a
dequeue of characters and the operations retrieve left, retrieve
right, insert left, insert right. Exceptional conditions such as
dequeue full or empty should be reported. Use two pointers left
and right for this simulation.
*/

#include <stdio.h>

char dequeue[100];
int left = -1, right = -1, n = 100, curr = 0;

void insertLeft(char x)
{
    if (curr == n)
    {
        printf("Dequeue is full\n");
        return;
    }
    if (curr == 0)
    {
        left = 0;
        right = 0;
        dequeue[left] = x;
        curr++;
        return;
    }
    for (int i = 0; i < curr; i++)
    {
        dequeue[i + 1] = dequeue[i];
    }
    dequeue[0] = x;
    curr++;
    right = curr - 1;
    return;
}
char getLeft()
{
    if (curr == 0)
    {
        printf("Dequeue is empty.\n");
        return '0';
    }
    return dequeue[left];
}
char getRight()
{
    if (curr == 0)
    {
        printf("Dequeue is empty.\n");
        return '0';
    }
    return dequeue[right];
}
void insertRight(char x)
{
    if (curr == n)
    {
        printf("Dequeue is full.\n");
        return;
    }
    if (curr == 0)
    {
        left = 0;
        right = 0;
        dequeue[right] = x;
        curr++;
        return;
    }
    dequeue[curr] = x;
    curr++;
    right = curr - 1;
    return;
}
char deleteLeft()
{
    if (curr == 0)
    {
        printf("Dequeue is empty.\n");
        return '0';
    }
    char x = dequeue[left];
    for (int i = curr - 1; i > 0; i--)
    {
        dequeue[curr - 1] = dequeue[curr];
    }
    curr--;
    right = curr - 1;
    return x;
}
char deleteRight()
{
    if (curr == 0)
    {
        printf("Dequeue is empty.\n");
        return '0';
    }
    char x = dequeue[right];
    curr--;
    right = curr - 1;
    return x;
}

int main()
{
    char q = 'y';
    printf("Press 1 for insertLeft\nPress 2 for insertRight\nPress 3 for getLeft\nPress 4 for getRight\nPress 5 for deleteLeft\nPress 6 for deleteRight\n");
    while (q != 'n' || q != 'N')
    {
        char p = '1';
        char x;
        printf("Insert your choice: ");
        scanf("%c", &p);
        fflush(stdin);
        switch (p)
        {
        case '1':
            printf("Insert character: ");
            scanf("%c", &x);
            fflush(stdin);
            insertLeft(x);
            break;
        case '2':
            printf("Insert character: ");
            scanf("%c", &x);
            fflush(stdin);
            insertRight(x);
            break;
        case '3':
            printf("getLeft: %c\n", getLeft());
            break;
        case '4':
            printf("getRight: %c\n", getRight());
            break;
        case '5':
            printf("deleteLeft: %c\n", deleteLeft());
            break;
        case '6':
            printf("deleteRight: %c\n", deleteRight());
            break;
        default:
            printf("Invalid Input.");
        }
        printf("Do you want to continue... ");
        scanf("%c", &q);
        fflush(stdin);
    }
    return 0;
}
