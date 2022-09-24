#include<stdio.h>
struct student
{
    int rollno;
    char stdname[30];
    int marks[5];
    int pass;
};
typedef struct student std;

void main(){
   std std_list[20];
   int i,j,n,temp;
   printf("Enter no of Students:");
   scanf("%d",&n);
   printf("enter student Data\n");
   for(i=0;i<n;i++){
    printf("enter rollno:");
    scanf("%d",&std_list[i].rollno);
    printf("enter name:");
    fflush(stdin);
    scanf(" %^[\n]",std_list[i].stdname);
    printf("enter marks in five subjects (MM:100)\n");
    std_list[i].pass=1;
    for(j=0;j<5;j++){
        scanf("%d",&temp);
        if(temp<30) std_list[i].pass=0;
        std_list[i].marks[j]=temp;
            
    }
   }
   printf("\n\n pass list \n");
   for(i=0;i<n;i++){
    if(std_list[i].pass==1)
        printf("%d %s\n",std_list[i].rollno,std_list[i].stdname);
   }
}
