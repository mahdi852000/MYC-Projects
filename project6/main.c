#include <stdio.h>


int main()
{
    float a,d;
    int N;

    printf("Enter first element of series (a):\n");
    scanf("%f",&a);
    printf("\n");

    printf("Enter first element of series (d):\n");
    scanf("%f",&d);
    printf("\n");

    printf("Enter number of elements (N):\n");
    scanf("%d",&N);
    printf("\n");


    float s = 0;
    float ai;

    printf("i\ta(i)\t\ts(i)\n" );

  /*  int i = 0;
    while (i < N)
        {
            ai = a + i*d;
            s += ai;
            printf("%d\t%f\t%f\n",i,ai,s);
            i++;
        }
        */
    for (int i=0; i < N; i+=1)
        {
            ai = a + i*d;
            s += ai;
            printf("%d\t%f\t%f\n",i,ai,s);
        }

    printf("\n\nFinal sum of Series is %f\n",s);


    return 0;
}
