#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "1.2 3.4 5.6 -5,7,6 -7 -7";
    char del[] = " ,";

    char *pt;
    pt = strtok(str,del);

    while (pt!= NULL)
    {
        printf("%s\n",pt);

        pt=strtok(NULL,del);
    }

    return 0;
}
