//wap to check inpute voter is valid
#include<stdio.h>
#include<conio.h>
void main(){
    int Age;
    printf("enter your age:--");
    scanf("%d",&Age);
    if(Age>=18)
      printf("you are a valid voter");
    else
    printf("you are not a valid voter");
}