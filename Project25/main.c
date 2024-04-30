#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str [20];

    printf("Enter a line of Text:\n");

    char c;
    int i=0;
    while ((c=getchar())!='\n')
    {
        str[i] = c;
        i++;
        if (i>=19) break;

    }

    str[i] = '\0';

    printf("Enter line of text : %s \n", str);
    puts(str);
    printf("\n");


    return 0;
}
