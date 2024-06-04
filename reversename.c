#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int character, i;
    char tempchar;

    puts("Please enter your name: ");
    gets(name);
    character=strlen(name);
    for(i=0;i<character/2;i++)
    {
        tempchar=name[i];
        name[i]=name[character-i-1];
        name[character-i-1]=tempchar;
         }
         puts("Reverse: ");
         puts(name);




         }

