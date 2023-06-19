#include<stdio.h>
#include<conio.h>
void main(){
    int Num1,Num2,Num3,Max;
    printf("Enter First Number:--");
    scanf("%d",&Num1);
    printf("Enter Second Number:--");
    scanf("%d",&Num2);
    printf("Enter Third Number:--");
    scanf("%d",&Num3);
    Max=Num1;
    if(Num2>Max && Num2>Num3){
        Max=Num2;
    }
    else if(Num3>Max){
        Max=Num3;
    }
    printf("Greater Number is %d",Max);
}