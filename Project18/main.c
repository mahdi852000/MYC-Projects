#include <stdio.h>
int DivisorsCount (int n );


int main()
{
    int n;
    printf("please enter an integer:\n");
    scanf("%d",&n);
    printf("\n");

    int nd= DivisorsCount(n);
    printf("number of divisors for %d is %d", n, nd);
    return 0;
}

int DivisorsCount (int n )

{

    if (n==0) return 0;
    if (n<0) return DivisorsCount(-n);

    int nd = 0;
    int i;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            nd++;
        }
    }

    return nd;

}
