#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float Real;
    float Image;

}Complex;

void DisplayComplex (Complex z);

int main()
{
    Complex z1 = {1,5};
    printf("z1 = ");
    DisplayComplex(z1);
    printf("\n");

    Complex z2 = {-2,2};
    printf("z2 = ");
    DisplayComplex(z2);
    printf("\n");

    Complex z3 = {0,0};
    printf("z3 = ");
    DisplayComplex(z3);
    printf("\n");

    Complex z4 = {10,-5};
    printf("z4 = ");
    DisplayComplex(z4);
    printf("\n");

    Complex z5 = {0,7};
    printf("z5 = ");
    DisplayComplex(z5);
    printf("\n");
    return 0;
}

void DisplayComplex (Complex z)
{
    float x = z.Real;
    float y = z.Image;

    if (x==0)
    {
        if (y==0)
        {
            printf("0\n");
            return;
        }

        else
        {
            printf("%fi\n",y);
            return;
        }

    }
    else
    {
        if (y==0)
            printf("%f\n",x);

        else
        {
            if (y>0)
            {
                printf("%f + %fi\n",x,y);

            }
            else
            {
                printf("%f - %fi\n",x,-y);
                return;
            }
        }
    }
    printf("%.2f + %.2fi\n",z.Real,z.Image);
}

complex Add (Complex z1, Complex z2)
{
    Complex
}
