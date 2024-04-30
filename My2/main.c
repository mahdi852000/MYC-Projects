#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Please enter an integer:\n");
    scanf("%d",&a);
    printf("Please enter an integer:\n");
    scanf("%d",&b);
    printf("Please enter an integer:\n");
    scanf("%d",&c);

    if (a>b)
    {
        if (a>c)
            {
                printf("%d\n\n",a);
            }
        else
        {
            if (a<c)
                printf("%d\n\n",c);
        }
    }

    else
    {
        if (a<b)
        {
            if (b>c)
                printf("%d\n\n",b);
            else {
                if (b<c)
                {
                    printf("%d\n\n",c);
                }
            }
        }

    }
    return 0;
}
