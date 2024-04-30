#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 10.56;
    double y = -4.8746;

    printf("using printf function:\n");
    printf("(x = %.4f , y = %.4f )" , x , y);
    printf("\n\n");

    char str[100];

    sprintf(str, "(x = %.4f , y = %.4f )",x,y);
    printf("using sprintf function:\n");
    puts(str);
    printf("\n\n");
    return 0;
}
