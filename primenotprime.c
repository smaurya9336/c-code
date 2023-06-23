#include<stdio.h>
#include<conio.h>
void main(){
        int Rng,i,j,flag=0,k=0,l=0;
       int arrp[100],arrc[100];

    printf("\n Enter Ur Range :--");
    scanf("%d",&Rng);
    
    for(i=2;i<=Rng;i++)
      {
	flag=0;
	for(j=2;j<=i/2;j++)
	{
          if(i%j==0)
           {
               flag++;
               
               break;
           }
       }

   	 if(flag==0)
   	 arrp[k++]=i;
    else
   	 arrc[l++]=i;
      }
  	 printf("Prime:\n");
   	 for(i=0;i<k;i++)
   	 printf("%d ",arrp[i]);
    	 printf("\nComposite:\n");
    	 for(i=0;i<l;i++)
    	 printf("%d ",arrc[i]);
}
    