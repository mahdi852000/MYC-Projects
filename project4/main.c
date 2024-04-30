#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b;
    int c;

    b=++a;
    c=a++;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d \n", c);

    return 0;
}
