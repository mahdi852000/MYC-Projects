#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     char s1[] = "Hello World!";
     char s2[40];
     char s3[40];

     strcpy(s2,s1);
     printf("using strcpy :\n");
     printf("s1=%s\n", s1);
     printf("\n");

     printf("using strncpy :\n");
     strncpy(s3,s1,5);
     printf("s1=%s\n", s1);
     printf("s3=%s\n", s3);


     char s4[] = "Hello";
     char s5[50];

     strcpy(s5, "world");
     printf("%s\n",s5);
     strcat(s5,s4);
     printf("%s\n",s5);




    return 0;
}
