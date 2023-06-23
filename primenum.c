//wap to check given number is prime or not
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,Rng,count=0;
    printf("Enter your Rang:--");
    scanf("%d",&Rng);
    printf("Prime Number is\n");
    i=2;
    while(i<=Rng){
        count=0;
        j=2;
        while(j<=i/2){
            if(i%j==0){
            count++;
            break;
            }
            j++;
        }
        i++;
           if(count==0){
             printf("  %d",i);
        }
        

    }
}