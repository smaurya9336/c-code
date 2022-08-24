#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=7;i=i+2){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}