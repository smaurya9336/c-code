#include<stdio.h>
void main(){
    int i,j;
    for(i=10;i>=1;i=i-2){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}