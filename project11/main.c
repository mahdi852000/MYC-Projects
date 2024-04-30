#include <stdio.h>
#include <math.h>
void solvedQuad ();


int main()
{
    int i;
    int N = 10;
    for (i =0; i<N; i++)
    {
      solvedQuad();
    }

    return 0;
}

void solvedQuad ()
{
    float a,b,c;
    printf("we are goiing to solve a quadradic equation:\n\n");
    printf("ax%c + bx + c = 0\n\n",253);
    printf("please enter the coefficeind of this equation:\n");

    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    float x1,x2;
    if (a==0)
    {
        if (b==0)
        {
            printf("error: cannot be solved\n");
        }
        else
        {
            x1 = -c/b;
            printf("this equation is first order and one root\n");
            printf("%f\n",x1);

        }
    }
    else
    {
        float delta = b*b - 4*a*c;
        if (delta==0)
        {
            printf("this equation has a real double root\n");
            x1=-b/(2*a);
            printf("x1 = x2 = %f\n",x1);
        }
        else if (delta>0)
        {
            printf("has two distinct real root\n");
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("x1 = %f", x1);
            printf("x2 = %f", x2);
        }
        else
        {
            if (b==0)
            {

                printf("x1 =  %fi\n",sqrt(-delta)/(2*a));
                printf("x2 = -%fi\n",sqrt(-delta)/(2*a));
            }
            else
            {
                printf("this equation has two complex roots\n");
                printf("x1 = %f + %fi\n",-b/(2*a), sqrt(-delta)/(2*a));
                printf("x2 = %f - %fi\n",-b/(2*a), sqrt(-delta)/(2*a));
            }


        }
    }
    printf("\n--------------------\n");
}
