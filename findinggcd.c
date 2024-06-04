#include <stdio.h>

int gcd(int x, int y){
if(y==0){
    return x;
}
return gcd(y, x%y);
}

int lcm(int x, int y){
return x*y/gcd(x,y);
}


int main() {
    int a;
    int b;

printf("Enter 2 number which do you want to get GCD value: ");
scanf("%d%d",&a,&b);

printf("GCD value of %d and %d is %d\n\n",a,b,gcd(a,b));
printf("LCM value of %d and %d is %d\n",a,b,lcm(a,b));
}
