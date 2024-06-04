#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()

{
    // satir sayisi bos kalabilir ama sutun sayisi bos kalamas
/*
int array2d[10][10]={{1,2,3,4,5,6},{1,3,4,5,1,2,3},{2,3,4,5,1,3}};
    printf("array boyutu : %d byte\n",sizeof(array2d));
    int i, j ;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){

            printf("%X ",&array2d[i][j]);
        }
        printf("\n");
    }

*/
int array[10],i,j;
srand(time(NULL));
printf("Array: \n");
for(i=0;i<10;i++){
    array[i]=rand()%100;
    printf("%d ",array[i]);}

for(i=0;i<9;i++){
    for(j=0;j<9-i;j++){
        if (array[j]>array[j+1]){
          int x=array[j];
          array[j]=array[j+1];
          array[j+1]=x;
        }
    }
}
printf("\nSirali Array:\n");
for(i=0;i<10;i++){
    printf("%d ",array[i]);
}
}

