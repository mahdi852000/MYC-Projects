#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter an integer:\n");
    scanf("%d",&a);
    int i;
    for (i=1; i<a; i++)
    {
        if (a%i==0)
            {
            printf("the number %d is not prime:\n", a);
            break;
            }

        else
            {
                printf("Is prime\n");

            }


    }

    return 0;
}
