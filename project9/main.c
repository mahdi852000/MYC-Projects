#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int ISprime (int a);



int main()
{
    int a;
    do
    {
    printf("Enter an integer:\n");
    scanf("%d",&a);
    printf("\n");

    /*int prime = TRUE;
    int i;
    for (i=2;i<sqrt(a);i++)
    {
        if (a%i==0)
        {
            prime = FALSE;
            break;
        }
    }*/
        if (ISprime(a))
    {
       printf("%d is a prime number\n\n",a);
    }
    else
    {
       printf("%d is not a prime number\n\n",a);
    }
    } while (a>0);
    return 0;
}

int ISprime (int a)
{
    int prime = TRUE;
    int i;
    for (i=2;i<sqrt(a);i++)
    {
        if (a%i==0)
        {
            prime = FALSE;
            break;
        }
    }
    return prime;
}
