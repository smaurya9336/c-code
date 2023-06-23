#include<stdio.h>
#include<conio.h>
void main(){
    int num,i;
    printf("Enter Ur number:--");
    scanf("%d",&num);
    i=1;
    while(i<=10){
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
}