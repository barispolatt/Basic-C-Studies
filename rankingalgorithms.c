#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int array[10], i, j, smallindex, smallnumber;
    srand(time(NULL));
    printf("Unordered Array: ");
    for(i=0;i<10;i++){
            array[i]=rand()%100;
        printf("%d ",array[i]);
    }
printf("\n");
    for(i=0;i<9;i++){
        smallnumber=array[9];
        smallindex=9;
        for(j=i;j<9;j++){
            if(array[j]<smallnumber){
                smallnumber=array[j];
                smallindex=j;
            }
        }
        printf("\n%d number changed place with %d number.\n",smallnumber,array[i]);
        array[smallindex]=array[i];
        array[i]=smallnumber;
    }
         printf("\nOrdered Array: ");
            for(i=0;i<10;i++){
            array[i]=rand()%100;
            printf("%d ",array[i]);
    }
    printf("\n\n\n\n");
    // int arr[][] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
//    printf("%d ",arr[0][0]);
  //  printf("%d ",arr[1][0]);
}

