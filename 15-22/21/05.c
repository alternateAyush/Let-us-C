/*
(c) In order to save disk space, information about student is stored in
an integer variable. Bit numbers 0 to 3 indicate whether the student
is a Ist year, IInd year, IIIrd year or IVth year student respectively. Bits 4
to 7 indicate whether the student's stream is Mechanical, Chemical,
Electronics or CS. Rest of the bits store room number. Such data for
4 students is stored in the following array:
int data[ ] = { 273, 548, 786, 1096 } ;
Write a program that uses this data and displays the information
about the student.
*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char yr[10];
    char stream[20];
    int room;
};

void decodeData(int n, int arr[n])
{
    char yr[][10] = {"Ist", "IInd", "IIIrd", "IVth"};
    char stream[][20] = {"Mechanical", "Chemical", "Electronics", "CS"};
    struct Student res[n];
    for (int i = 0; i < n; i++)
    {
        int bit = 1;
        int idx = 0;
        while (bit <= 8)
        {
            if ((arr[i] & bit) != 0)
            {
                strcpy(res[i].yr, yr[idx]);
                break;
            }
            idx++;
            bit = bit << 1;
        }
        idx=0;
        bit=(1<<4);
        while(bit<=(1<<7)){
            if((arr[i]&bit)!=0){
                strcpy(res[i].stream,stream[idx]);
                break;
            }
            idx++;
            bit=bit<<1;
        }
        res[i].room=(arr[i]>>8);
    }
    for(int i=0; i<n; i++){
        printf("Student %d, Year: %-10s, Stream: %-20s, Room No.: %-10d\n",i+1,res[i].yr,res[i].stream,res[i].room);
    }
    return;
}

int main()
{
    int data[] = {273, 548, 786, 1096};
    decodeData(4, data);
    return 0;
}