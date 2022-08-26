#include<stdio.h>
#include<conio.h>
void main(){
    int x,great;
    printf("Enter numbers (-1) to stop \n");
    scanf("%d",&x);
    great=x;
    while (x!=-1)
    {
        scanf("%d",&x);
        if(x>great) great=x;
    }
    printf("Greatest=%d",great);
}