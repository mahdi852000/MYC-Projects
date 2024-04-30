#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d;

    printf("please enter the day as YYYY-MM-DD:");
   // scanf("%4d", &y);
    //scanf("%2d",&m);
    //scanf("%2d",&d);
    scanf("%4d-%2d-%2d", &y, &m, &d);
    printf("\n");
    printf("result:\n");
    printf("Year: %d\n",y);
    printf("Month: %d\n",m);
    printf("Day: %d\n",d);

    return 0;
}
