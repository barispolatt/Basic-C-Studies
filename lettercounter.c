#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lettercounter(char userinput[]){

char characters[26]; //maximum usable character count
int i,j;             //i for first loop, j for second loop

for(i=0;i<26;i++){
    characters[i]='€';//to inquire is it empty or not
}
i=0;

while(userinput[i]!='\0'){
    j=0;              //second
    while(1){
        if(characters[j]=='€'){
            characters[j]=userinput[i];
            break;
        }
        else if(characters[j]==userinput[i]){
            break;
        }
        j++;
    }
    i++;
    }
    for(i=0;i<26;i++){
        if(characters[i]=='€'){
            break;
        }
    }
    return i;
}

int main()
{
    int specialcharacters=lettercounter("barispolat"); //string goes to user input

printf("The string that you wrote has %d special characters",specialcharacters);

return 0;

}
