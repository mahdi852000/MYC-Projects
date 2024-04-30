#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Please enter an integer:\n");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("%d is an Even Number!\n",a);
    }
    else
    {
        printf("%d is an Odd Number!\n",a);
    }
    return 0;
}
