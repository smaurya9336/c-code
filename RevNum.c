#include<stdio.h>
#include<conio.h>

void main(){
    int num ,Rem, RevNum;
    printf("Enter your number:--");
    scanf("%d",&num);
    for(RevNum=0;num>=1;num=num/10){
        Rem=num%10;
        RevNum=Rem+RevNum*10;
    }
    printf("Reverse Number is %d",RevNum);
}