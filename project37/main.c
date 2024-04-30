#include <stdio.h>
#include <stdlib.h>

typedef enum {FAR=1,ORD,KHR,
              TIR,MOR,SHR,
              MER,ABN,AZR,
              DAY,BAH,ESF}Month;

int main()
{
    Month m;
    char *MonthName [] = {"",
        "Farvardin","Ordibehesht","Khordad",
        "Tir","Mordad","Shahrivar",
        "Mehr","Aban","Azar",
        "Day","Bahman","Esfand"};

        for (m=FAR; m<=ESF; m++)
        {
            printf("%3d %s\n", m, MonthName[m]);
        }

    return 0;
}
