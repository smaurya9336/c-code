#include<stdio.h>
#include<conio.h>
void main(){
    int x,great;
    printf("Enter numbers (-1) to stop \n");
    scanf("%d",&x);
    great=x;
    while (1)
    {
        scanf("%d",&x);
        if(x>great) great=x;
        if(x==-1) break;
    }
    printf("Greatest=%d",great);
}