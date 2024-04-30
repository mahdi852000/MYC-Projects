#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int a,s,i;

    i = 0;
    s = 0;

    while(i<n)
    {
        printf("enter an integer:\n");
        scanf("%d",&a);
        if (a==-1) break;
        s+=a;
        i++;
    }

    printf("sum is : %d\n",s);

    float m = (float)s/n;
    printf("mean of numbers is : %f ",m);

    return 0;
}
