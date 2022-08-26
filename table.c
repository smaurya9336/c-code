#include<stdio.h>
void main(){
    int i,n;
    printf("enter any number of table:\n");
    scanf("%d",&n);
    for(i=1;i<=15;i++){
        printf("%d * %d =%d\n",n,i,n*i);
    }
}