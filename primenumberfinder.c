#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int range1, range2, i, j, x;
printf("please enter your range:\n"); scanf("%d%d",&range1,&range2);
for(i==range1;i<=range2;i++){
  x=0;
  for(j=2;j<i;j++){
    if(i%j==0){
        x=1;
        break;
    }

  }
        if(!x){
        printf("%d\n",i);
        }
    }










}
