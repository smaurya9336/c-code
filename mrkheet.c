#include<stdio.h>
#include<conio.h>
void main(){
    char StuNm[30];
    int roll,Math,Phy,Chm;
    float per;
    printf("enter Your name:--");
    scanf("%s",&StuNm);
    printf("Enter your Roll No:--");
    scanf("%d",&roll);

    printf("Enter your Mathmatics Marks:");
    scanf("%d",&Math);
    printf("Enter your Physics Marks:");
    scanf("%d",&Phy);
    printf("Enter your Chemistry Marks:");
    scanf("%d",&Chm);

    printf("\nTotal marks of students is %d",(Math+Phy+Chm));
    per=(Math+Phy+Chm)/3;
    printf("\n Percentage is %.2f",per);
    if(per>=75 && per<=100)
    {
        /* code */
        printf("\n Distinction");
    
    }
    else if(per>=60 && per<75){
        printf("\n First Division");

    }
    else if(per>=45 && per<60){
        printf("\n second Division");
        
    }
    else if(per>=33 && per<45){
        printf("\n Third Division");
        
    }
    else{
        printf("\nFail");
    }
    


}