#include<stdio.h>
#include<conio.h>
//#define addNo(Num1,Num2) (Num1+Num2)
#define Max(a,b) ((a>b)?a:b)
void main(){
    int Num1,Num2;
    printf("Enter First Number:--");
    scanf("%d",&Num1);
    printf("Enter second  Number:--");
    scanf("%d",&Num2);
    printf("Greater Number is %d",Max(Num1,Num2));
   // printf("\nThe Sum of %d and %d is %d",Num1,Num2,addNo(Num1,Num2));
//     printf("Enter First Number:--");
//     scanf("%d",&Num1);
//     printf("Enter Second Number:--");
//     scanf("%d",&Num2);
//     printf("Enter Third Number:--");
//     scanf("%d",&Num3);
//     Max=Num1;
//    if(Num2>Max){
//         //printf("First number is greater");
//         Max=Num2;
//     }
//    if(Num3>Max){
//         //printf("Second number is grater");
//         Max=Num3;
//     }
//     // else{
//     //     printf("Third number is greater");
//     // }
//     printf("\n Greater number is %d",Max);

}