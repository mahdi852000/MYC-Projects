#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void compareString (const char *str1, const char *str2);


int main()
{
    char s1[]="abc";
    char s2[]="abc";
    char s3[]="abd";
    char s4[]="abb";


    printf("input strings:\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    printf("s4 = %s\n", s4);
    printf("\n");

    printf("comparing s1 and s2:\n");
    compareString(s1,s2);
    printf("\n");

    printf("comparing s1 and s3:\n");
    compareString(s1,s3);
    printf("\n");

    printf("comparing s1 and s4:\n");
    compareString(s1,s4);
    printf("\n");

    printf("comparing s3 and s2:\n");
    compareString(s3,s2);
    printf("\n");



    return 0;
}

void compareString (const char *str1, const char *str2)

{
    if (strcmp(str1,str2)==0)
    {
        printf("%s = %s\n", str1, str2);
    }
    if (strcmp(str1,str2)<0)
    {
        printf("%s smaller %s\n", str1, str2);
    }
    if (strcmp(str1,str2)>0)
    {
        printf("%s greater than %s\n", str1, str2);
    }
}
