//wap for marksheet
#include<stdio.h>
#include<conio.h>
void main(){
    int roll,Math,Phy,Chm;
    char stuNm[30];
    printf("Enter your Nma:-- ");
    scanf("%s",&stuNm);
    printf("Enter your roll no.:---");
    scanf("%d",&roll);
    printf("Enter your Math marks--");
    scanf("%d",&Math);
    printf("Enter your Phy marks:--");
    scanf("%d",&Phy);
    printf("Enter you Chm marks:--");
    scanf("%d",&Chm);
    printf("Your total marks is %d",(Math+Phy+Chm));
    printf("your Avarage marks is %d",((Math+Phy+Chm)/300));
    printf("Your percentage is %d",(((Math+Phy+Chm)/300)*100));


}