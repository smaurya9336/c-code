//wap to check given number is prime or not
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,Rng,count=0,k=0,l=0;
    int arrp[100],arrc[100];
    printf("Enter your Rang:--");
    scanf("%d",&Rng);
    printf("Prime Number is\n");
    i=1;
    while(i<Rng){
        count=0;
        i++;
        j=2;
        while(j<=i/2){
            if(i%j==0){
            count++;
            break; 
            } 
            j++;
        }
          if(count==0)
   	       arrp[k++]=i;
         else
   	     arrc[l++]=i;
      }
  	 printf("Prime:\n");
     i=0;
   	while(i<k){
   	    printf("%d ",arrp[i]);
        i++;
    
    }
    printf("\nComposite:\n");
         i=0;
          while(i<l){
           printf("%d ",arrc[i]);
           i++;

    
}
}
