#include<stdio.h>
#include<conio.h>
void main(){
    int rng,i,j,count=0;
    printf("Enter your range:--");
    scanf("%d",&rng);

    printf("prime number is\n");
    for(i=2;i<=rng;i++){
        count=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;

            }
            }
            if(count==0){
                printf("  %d",i);
        }
            
            
        
    
    }
}