#include<stdio.h>
#include<conio.h>

void main()
   {
       int Num,Rem,RevNum,OrgNum;
 
       printf("\n Enter Ur Number :--");
       scanf("%d",&Num); // 145

       OrgNum=Num;
       RevNum=0;

       do
         {
              Rem=Num%10;
              RevNum=RevNum+Rem*10;
              Num=Num/10; 
          }while(Num>=1);

      if(OrgNum==RevNum)
          printf("\n Given Number is Palindrome Number.");
      else
          printf("\n Given Number is Not a Palindrome Number.");


   }