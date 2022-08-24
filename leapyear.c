//WRITE A PROGRAM TO FIND AREA OF CIRCLE IN C LANGUAGE
#include<stdio.h>
#include<conio.h>
void main ()
{
    int year;
    printf("enter a year:-");
    scanf("%d",&year);
    if(year%400==0){
        printf("%d is a leap year");
    }
    else if(year%100==0){
        printf("%d is not a leap year");
    }
    else if(year%4==0){
        printf("%d is a leap year");
    }
    else{
        printf("%d is not a leap year");
    }
    
    
}