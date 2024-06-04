#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int array1[3][3],array2[3][3],i,j,x,y;
    srand(time(NULL));
    printf("Array1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            array1[i][j]=rand()%100;
            printf("%d  ",array1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nArray2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            array2[i][j]=rand()%100;
            printf("%d  ",array2[i][j]);
        }
        printf("\n");
    }


}


