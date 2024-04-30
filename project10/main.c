#include <stdio.h>
#include <stdlib.h>
int Fibo1(int n);

int main()
{
    int m;
    printf("Using Function Fibo1\n");
    for (m=0; m<10; m++)
    {
        printf("F(%d) = %d\n", m , Fibo1(m));
    }

    printf("Using Function Fibo\n");
    for (m=0; m<10; m++)
    {
        printf("F(%d) = %d\n", m , Fibo(m));
    }
    return 0;
}
int Fibo1(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;

    int a=0;
    int b=1;
    int i;
    int c;
    for (i=2; i<=n; i++)
    {
        c = a + b;
        a = b;
        b = c;

    }
    return c;
}

int Fibo(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return Fibo(n-1)+Fibo(n-2);
}
