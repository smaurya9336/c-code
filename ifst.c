// write a program to ckech a valid voter or not using if else statement
#include<stdio.h>
void main(){
    int age;
    printf("enter your age:-");
    scanf("%d",&age);
    if(age>=18){
        printf("you are a valid voter");
    }
    else{
        printf("you are not a valid voter");
    }
}