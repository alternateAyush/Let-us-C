/*

(e) If we are to display the following output properly aligned which
format specifiers would you use?
{{"Discovery of India", "Jawaharlal Nehru", 425.50},
{"My Experiments with Truth", "Mahatma Gandhi", 375.50},
{"Sunny Days", "Sunil Gavaskar", 95.50},
{"One More Over", "Erapalli Prasanna", 85.00}}

*/

#include <stdio.h>
#include <string.h>

struct Book
{
    char name[30];
    char author[30];
    float price;
};

int main()
{
    int n = 4;
    struct Book arr[] = {{"Discovery of India", "Jawaharlal Nehru", 425.50},
                         {"My Experiments with Truth", "Mahatma Gandhi", 375.50},
                         {"Sunny Days", "Sunil Gavaskar", 95.50},
                         {"One More Over", "Erapalli Prasanna", 85.00}};
    for (int i = 0; i < n; i++)
    {
        printf("%-30s %-30s %10.2f\n", arr[i].name, arr[i].author, arr[i].price);
    }
    return 0;
}