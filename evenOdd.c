//wap to check your inputed  number is even or odd
#include<stdio.h>
#include<conio.h>
void main(){
    int Num;
    printf("Enter your Number:--");
    scanf("%d",&Num);
    printf("*********************\n");
    if (Num%2==0)
    {
        printf("Number is Even\n");
        printf("****************");
    }
    else{
        printf("Number is Odd\n");
        printf("******************");
    }
    
}