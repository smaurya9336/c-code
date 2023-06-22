#include<stdio.h>
#include<conio.h>
void main(){
    int num,i,count=0;

    printf("Enter your number:--");
    scanf("%d",&num);
       for(i=2;i<=num/2;i++){
        if(num%2==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Given number is prime number");

    }
    else{
        printf("number is not prime");
    }
}