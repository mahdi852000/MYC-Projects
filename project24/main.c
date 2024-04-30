#include <stdio.h>
#include <stdlib.h>
void reverseString (const char *s );
int main()
{
    char str[50];
    printf("enter a line of text: \n");
    fgets(str,50,stdin);
    printf("\nentered text is :  \n");
    printf("%s", str);

    printf("\nLenght of Entered Text is : %d", strlen(str)-1);

    printf("Reversed Text: \n");
    reverseString(str);
    printf("\n");


    return 0;
}


void reverseString (const char *s )

{
    if (s[0]=='\0')
    {
        return;
    }
    else
    {
        reverseString(&s[1]);
        putchar(s[0]);
    }
}
