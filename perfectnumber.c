#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number, i, j, sum;

    printf("please enter your lucky number:\n"); scanf("%d",&number);

    for(i=1;i<number;i++){
    if(number%i==0){
        sum+=i;
    }}
    if(number==sum){
        printf("%d is a perfect number!\n\n",number);
    }

    else{
        printf("%d is not a perfect number\n\n",number);
    }
printf("Between 0-100000,\n");
for(i=1;i<=10000;i++){
        sum=0;
for(j=1;j<i;j++){
    if(i%j==0){
        sum+=j;
    }
}
if(i==sum){
    printf("%d is a perfect number\n",i);
}
}


}



