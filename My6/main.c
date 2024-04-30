#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0,n2=1,n3,i,number;
    printf("Enter an integer:\n");
    scanf("%d",&number);
    printf("%d %d\n", n1, n1);
    for (i=2; i <number; i++)
    {

        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
