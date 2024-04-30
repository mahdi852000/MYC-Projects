#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void findCharacter (const char *str, char c );
void FindWord (const char *str , const char *w);

int main()
{
    char str [] = "To be, or not to be. that is the question";
    findCharacter(str,'b');
    //findCharacter(str,'e');
    //findCharacter(str,'t');
    //findCharacter(str,'a');

    FindWord(str,"not");
    return 0;

}

void findCharacter (const char *str, char c )

{
    char *pc;
    pc = strchr(str,c);
    int i,n;
    n=0;

    printf("finding of the character %c in the following string: \n", c);
    puts(str);
    printf("\n\n");


    while(pc!=NULL)
    {
        i = pc - str + 1;
        printf("Found %c at position %d\n", c, i);
        n++;
        pc = strchr (pc+1,c);
    }

    if (n>0)
    {
        printf("%d occurrences of character found %c \n",n, c);

    }

    else
    {
        printf("Nothing Found\n");
    }

    printf("--------------------\n");
}

void FindWord (const char *str , const char *w)
{
  printf("Finding first occurrence of world %s in the following sentence: \n",w);
  puts(str);
  printf("\n");


  char *pw=strstr(str,w);
  if (pw == NULL)
  {
      printf("nothing found\n");
  }
  else
  {
     puts(pw);
     int i = pw - str+1;
     printf("Found at index %d\n", i);
  }
}
