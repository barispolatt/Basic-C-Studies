#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

int piramittaban,i,j;
printf("Lütfen piramidin tabanini girinis: "); scanf("%d",&piramittaban);


for(i=1;i<=piramittaban;i++){
    for(j=0;j<i;j++){
        printf("*");
    }
printf("\n");
}

}
