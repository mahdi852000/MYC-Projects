#include <stdio.h>
#define TRUE -1

int main()
{
    char g;
    int nA = 0;
    int nB = 0;
    int nC = 0;
    int nD = 0;
    int nF = 0;
    while ((g = getchar()) !=EOF)

    {
       switch (g)

        {
            case 'A':
            case 'a':
                nA++;
                break;

            case 'B':
            case 'b':
                nB++;
                break;

            case 'C':
            case 'c':
                nC++;
                break;

            case 'D':
            case 'd':
                nD++;
                break;

            case 'F':
            case 'f':
                nF++;
                break;

            case ' ':
            case '\n':
            case '\t':
                break;

            default:
                printf("incorrect input\n");
    }
}

    int n = nA+nB+nC+nD+nF;
    printf("Grade\tCount\tPercent\n ");
    printf("A\t %d of %d\t%f\n", nA,n, (float)nA*100/n);
    printf("B\t %d of %d\t%f\n", nB,n, (float)nB*100/n);
    printf("C\t %d of %d\t%f\n", nC,n, (float)nC*100/n);
    printf("D\t %d of %d\t%f\n", nD,n, (float)nD*100/n);
    printf("F\t %d of %d\t%f\n", nF,n, (float)nF*100/n);
    printf("%d",n);

    return 0;
}
