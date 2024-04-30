#include <stdio.h>
#include <math.h>


int main()
{
    float a,d,p;
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

    printf("enter the exponent number:\n");
    scanf("%f",&p);
    printf("\n");

    printf("i\ta(i)\t\ts(i)\t\tbi\t\tT(i)\n");

    float s = 0;
    float ai;

    float T =0;
    float bi;



    for (int i=0; i < N; i+=1)
        {
            ai = a + i*d;
            s += ai;
            bi = pow(ai,p);
            T +=bi;
            printf("%d\t%f\t%f\t%f\t%f\n",i,ai,s,bi,T);
        }

    printf("\n\nFinal sum of Series is %f\n",s);
    printf("Final series of power %f is %f\n",p,T);


    return 0;
}
