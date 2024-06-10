/*
Write a program that receives an integer (less than or equal to nine
digits in length) and prints out the number in words. For example, if
the number input is 12342, then the output should be Twelve
Thousand Three Hundred Forty Two.
*/

#include <stdio.h>
#include <string.h>

char arr1[][10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char arr2[][10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char arr3[][10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

void func2(int num, char s[])
{
    if (num >= 100)
    {
        strcat(s, arr1[num / 100]);
        strcat(s, " Hundred ");
        func2(num % 100, s);
        return;
    }
    else if (num >= 10)
    {
        if (num < 20)
        {
            strcat(s, arr2[num % 10]);
            return;
        }
        else
        {
            strcat(s, arr3[num / 10]);
            strcat(s, " ");
            func2(num % 10, s);
        }
    }
    else if (num >= 1)
    {
        strcat(s, arr1[num]);
        return;
    }
    return;
}

void func(int num, char s[])
{
    if (num >= 1000000000)
    {
        int q = num / 1000000000;
        func2(q, s);
        strcat(s, " Billion ");
        func(num % 1000000000, s);
        return;
    }
    else if (num >= 1000000)
    {
        int q = num / 1000000;
        func2(q, s);
        strcat(s, " Million ");
        func(num % 1000000, s);
        return;
    }
    else if (num >= 1000)
    {
        int q = num / 1000;
        func2(q, s);
        strcat(s, " Thousand ");
        func(num % 1000, s);
        return;
    }
    func2(num, s);
    return;
}

void numberToWords(int num, char s[])
{
    if (num == 0)
    {
        strcat(s, "Zero");
        return;
    }
    func(num, s);
    return;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    char s[] = "";
    numberToWords(num, s);
    printf("%s", s);
    return 0;
}
