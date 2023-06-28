//wap to check given number is prime or not using do-while loop
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,Rng,count=0;
    printf("Enter your Rang:--");
    scanf("%d",&Rng);
    printf("Prime Number is\n");
    i=1;
    do{
        count=0;
        i++;
        
        for(j=2;j<=i/2;j++){
            if(i%j==0){
            count++;
            break; 
            } 
            
        }
           if(count==0){
             printf("  %d",i);
        }
        

    }while(i<Rng);
}