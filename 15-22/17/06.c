/*
(f) Create a structure called library to hold accession number, title of
the book, author name, price of the book, and flag indicating
whether book is issued or not. Write a menu-driven program that
implements the working of a library. The menu options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of book specified by accession number
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void linkFloat()
{
    float a = 0, *b;
    b = &a;
    a = *b;
}

struct library
{
    int accNo;
    char title[30];
    char author[30];
    float price;
    char flag;
};

void printHeadings()
{
    char heading[][50] = {"S. No.", "Accession No.", "Title", "Author", "Price", "Issued"};
    printf("\n%-10s %-15s %-30s %-30s %-15s %-10s", heading[0], heading[1], heading[2], heading[3], heading[4], heading[5]);
}

void listAllBooks(int n, struct library arr[n])
{
    printHeadings();
    if (n == 0)
    {
        printf("\nNo books found.");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%-10d %-15d %-30s %-30s %-10.2f %10c", i + 1, arr[i].accNo, arr[i].title, arr[i].author, arr[i].price, arr[i].flag);
    }
    return;
}
void listAllBooksWithAuthor(int n, struct library arr[n], char author[30])
{
    printHeadings();
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(author, arr[i].author) == 0)
        {
            f = 1;
            printf("\n%-10d %-15d %-30s %-30s %-10.2f %10c", i + 1, arr[i].accNo, arr[i].title, arr[i].author, arr[i].price, arr[i].flag);
        }
    }
    if (f == 0)
    {
        printf("\nNo books found.");
    }
    return;
}
void listAllBooksWithAccNo(int n, struct library arr[n], int accNo)
{
    printHeadings();
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (accNo == arr[i].accNo)
        {
            f = 1;
            printf("\n%-10d %-15d %-30s %-30s %-10.2f %10c", i + 1, arr[i].accNo, arr[i].title, arr[i].author, arr[i].price, arr[i].flag);
            break;
        }
    }
    if (f == 0)
    {
        printf("\nNo books found.");
    }
    return;
}

int cmp(const void *b1, const void *b2)
{
    return (((struct library *)b1)->accNo - ((struct library *)b2)->accNo);
}

void sortAndListBooks(int n, struct library arr[n])
{
    printHeadings();
    if (n == 0)
    {
        printf("\nNo books found.");
        return;
    }
    qsort((struct library *)arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("\n%-10d %-15d %-30s %-30s %-10.2f %10c", i + 1, arr[i].accNo, arr[i].title, arr[i].author, arr[i].price, arr[i].flag);
    }
    return;
}

int main()
{
    /*
    1. Add book information\n
    2. Display book information\n
    3. List all books of given author\n
    4. List the title of book specified by accession number\n
    5. List the count of books in the library\n
    6. List the books in the order of accession number\n
    7. Exit\n
    printf("1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of book specified by accession number\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
    */
    struct library arr[100];
    int idx = -1;
    int opt = 0;
    int dh;
    printf("1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of book specified by accession number\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
    while (opt != 7)
    {
        char author[30];
        int accNo;
        printf("\nEnter choice:\n> ");
        scanf("%d", &opt);
        while ((dh = getchar()) != '\n')
            ;
        switch (opt)
        {
        case 1:
            if (idx == 99)
            {
                printf("\nLibrary is full.");
            }
            else
            {
                idx++;
                printf("Enter accession number: ");
                scanf("%d", &arr[idx].accNo);
                while ((dh = getchar()) != '\n')
                    ;
                printf("Enter Book title: ");
                gets(arr[idx].title);
                printf("Enter Author Name: ");
                gets(arr[idx].author);
                printf("Enter price: ");
                scanf("%f", &arr[idx].price);
                while ((dh = getchar()) != '\n')
                    ;
                printf("Is book issed (Y/N): ");
                scanf("%c", &arr[idx].flag);
                while ((dh = getchar()) != '\n')
                    ;
            }
            break;
        case 2:
            listAllBooks(idx + 1, arr);
            break;
        case 3:
            printf("\nEnter author name: ");
            gets(author);
            listAllBooksWithAuthor(idx + 1, arr, author);
            break;
        case 4:
            printf("\nEnter accession number: ");
            scanf("%d", &accNo);
            while ((dh = getchar()) != '\n')
                ;
            listAllBooksWithAccNo(idx + 1, arr, accNo);
            break;
        case 5:
            printf("\n count: %d", idx + 1);
            break;
        case 6:
            sortAndListBooks(idx + 1, arr);
            break;
        case 7:
            printf("\nExiting program...|");
            break;
        default:
            printf("Invalid option.");
            break;
        }
    }
    return 0;
}