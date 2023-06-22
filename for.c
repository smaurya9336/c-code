// input
// 2
// 0 2 10
// 5 3 5

// output
// 2 6 14 30 62 126 254 510 1022 2046
// 8 14 26 50 98

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5
#include<stdio.h>
#include<conio.h>
void main(){
    int num1=0,num2=1,num3,Rng,i;
    printf("Enter the number:");
    scanf("%d",&Rng);
    printf("  %d  %d",num1,num2);
    for(i=3;i<=Rng;i++){
        num3=num1+num2;
        printf(" %d ",num3);
        num1=num2;
        num2=num3;
    }
   
}