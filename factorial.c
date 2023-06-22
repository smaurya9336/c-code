#include<stdio.h>
#include<conio.h>
void main(){
    int i,num;
    printf("Enter your number:");
    scanf("%d",&num);
    long fact=1;
    for(i=num;i>=1;i--){
        fact=fact*i;  
    }
    printf(" Factorial of %ld is %ld",num,fact);

}