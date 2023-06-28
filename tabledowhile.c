#include<stdio.h>
#include<conio.h>
void main(){
    int num,i;
    long fact=1;
    printf("enter the number:-");
    scanf("%d",&num);
    i=1;
    do{
        fact=fact*i;
        i++;
    }while(i<=num);
    printf("The factorial of %d is %ld",num,fact);
}