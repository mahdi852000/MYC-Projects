#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("please enter an integer:\n\n");
    scanf("%d",&a);

    if (a<0)
    {
        return 0;
    }
    for (int i = 0; i <  a; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);

        }
    }
    return 0;
}
