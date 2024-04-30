#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str [] = "(x = -5.45, y = 10.67)";
    printf("input string is : \n");
    puts(str);
    printf("\n\n");

    float x,y;
    sscanf(str, "(x = %f , y = %f)", &x , &y);
    printf("results of sscanf: \n\n");

    printf("x=%f , y =%f", x , y);
    return 0;
}
