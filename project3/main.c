#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

int main()
{

    int a;
    while (1)
    {


    printf("Enter an integer:\n");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("%d is an Even Number\n",a);
    }
    else
    {
        printf("%d is an Odd Number\n",a);
    }

    if (a>0)

    {
        printf("%d is Positive\n",a);
    }
    else
    {
        if (a<0)
        {
            printf("%d is Negative\n",a);
        }
        else
        {
            printf("%d is Zero!\n",a);
        }
    }
    }



    return 0;
}
