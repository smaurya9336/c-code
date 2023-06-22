#include<stdio.h>
#include<conio.h>
void main(){
    int num,i;
    long  fact=1;
    printf("Enter your number:--");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %ld",num ,fact);
}