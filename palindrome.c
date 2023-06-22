#include<stdio.h>
#include<conio.h>
void main()
{
    int num,Rem,RevNum,OrgNum;
    printf("Enter your number:--");
    scanf("%d",&num);
    OrgNum=num;
    for(RevNum=0;num>=1;num=num/10){
        Rem=num%10;
        RevNum=Rem+RevNum*10;
    }if(RevNum==OrgNum){
        printf("given number is palindrome");
    }else{
        printf("not a palindrome");
    }
}