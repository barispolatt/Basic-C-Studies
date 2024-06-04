#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int sayi,sayinintersi,gecicisayi,kalan;
sayinintersi=0;

printf("tersini almak istediginis sayiyi girinis: "); scanf("%d",&sayi);

gecicisayi=sayi;

while(gecicisayi!=0){

     kalan=gecicisayi%10;
     sayinintersi=sayinintersi*10+kalan;
     gecicisayi/=10;

}

printf("%d sayisinin tersi %d",sayi,sayinintersi);

}
