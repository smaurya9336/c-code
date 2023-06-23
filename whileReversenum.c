// wap to print reverse number
#include<stdio.h>
#include<conio.h>
void main(){
    int num,Rem,RevNum,OrgNum;
    printf("Enter your number:--");
    scanf("%d",&num);
    OrgNum=num;
    RevNum=0;
    while(num>=1){
        Rem=num%10;
        RevNum=Rem+RevNum*10;
        num=num/10;
    }
    if(RevNum==OrgNum){
           printf("Number is Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}