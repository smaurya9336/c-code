#include<stdio.h>
#include<conio.h>
void main(){
    char s1[]="Sarita",s2[50];
    printf("enter your password:--");
    gets(s2);
    printf("result=%d",strcmp(s1,s2));
}