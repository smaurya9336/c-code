//wap to print Factorial number using increasing order
#include<stdio.h>
#include<conio.h>
void main(){
    int num,i;
    long fact=1;
    printf("enter your number:");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("factorial is %ld",fact);

}