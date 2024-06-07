#include <stdio.h>

int CalculateMinNotes(int amt, int count)
{
    if(amt==0){
        return count;
    }
    else if (amt < 0 || amt % 100 != 0)
    {
        return -1;
    }
    else if (amt >= 2000)
    {
        return CalculateMinNotes(amt % 2000, count + (amt / 2000));
    }
    else if (amt >= 500)
    {
        return CalculateMinNotes(amt % 500, count + (amt / 500));
    }
    else if (amt >= 200)
    {
        return CalculateMinNotes(amt % 200, count + (amt / 200));
    }
    else if (amt >= 100)
    {
        return CalculateMinNotes(amt % 100, count + (amt / 100));
    }
    return -1;
}

int main()
{
    int amt;
    scanf("%d", &amt);
    int count = CalculateMinNotes(amt, 0);
    if (count == -1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Minimum notes = %d", count);
    }
    return 0;
}