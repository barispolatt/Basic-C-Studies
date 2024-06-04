#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int kucukharf=0,buyukharf=0,karaktersayisi=0,sayi=0;
char ch;
printf("Lutfen sifreyi girinis:\n");
do{
    ch=getchar();
if(kucukharf==0){
    if(islower(ch)){
        kucukharf=1;
    }
}
if(buyukharf==0){
    if(isupper(ch)){
        buyukharf=1;
    }
}
if(sayi==0){
    if(isdigit(ch)){
        sayi=1;
    }
}
karaktersayisi++;
}
while(ch!='\n');
if(kucukharf && buyukharf && sayi && karaktersayisi>=8 && karaktersayisi <=16){
    printf("parola basari ile degistirilmistir");
}
else{
    printf("sifre kabul edilmemistir");
}


}

