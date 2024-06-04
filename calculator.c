#include <stdio.h>


int summation(int number1, int number2)
{

    return number1+number2;
}
int subtraction(int number1, int number2)
{

    return number1-number2;
}
int multiplication(int number1, int number2)
{

    return number1*number2;
}
int division(int number1, int number2)
{

    return number1/number2;
}
int calculate(int(*ptr[4])(int,int),int number1,int number2,int action)
{
    if(action==1){
        (*ptr[0])(number1,number2);
    }
    else if(action==2){
        (*ptr[1])(number1,number2);
    }
    else if(action==3){
        (*ptr[2])(number1,number2);
    }
    else if(action==4){
        (*ptr[3])(number1,number2);
    }

}

int main()
{
    int number1, number2, action;
    int(*ptr[4])(int,int);
    ptr[0]=summation;
    ptr[1]=subtraction;
    ptr[2]=multiplication;
    ptr[3]=division;

    printf("To calculate, enter a number, chose operation, then enter second number.\n\n");
    printf("Operators: Summation '1', Subtraction '2', Multiplication '3', Division '4'\n\n\n");
    scanf("%d%d%d",&number1,&action,&number2);

    int ans=calculate(ptr, number1, number2, action);

    printf("\n%d\n",ans);

}
