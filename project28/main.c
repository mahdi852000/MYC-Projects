#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
int main()
{
    int e;
    while(TRUE)
    {
        printf("please enter an error code :\n");
        scanf("%d",&e);

        if (e<0) break;
        printf("error message for Error code #%d\n", e);
        puts(strerror(e));
        printf("\n");
    }

    return 0;
}
