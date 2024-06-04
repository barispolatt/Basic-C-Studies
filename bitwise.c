#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

int gecicisayi,sayi,i=0;
char bitarray[32];

printf("lutfen bit duseyine cevrilcek sayiyi girinis: "); scanf("%d",&sayi);
gecicisayi=sayi;

while(gecicisayi!=0){
    if(gecicisayi%2==0){
        bitarray[i]='0';
    }

    else{
        bitarray[i]='1';
        }
    i++;
    gecicisayi/=2;
}

printf("%d sayisinin bit degeri: ",sayi);

while(i>=0){

    printf("%c",bitarray[i]);
    i--;

}

}
