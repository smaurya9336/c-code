#include<stdio.h>
#include<conio.h>
#define N 5 //size of queue
int empty=1;

int qempty(int front,int rear){
    if(front==rear && empty==1)
        return 1;
    return 0;
}
void qadd(int item,int q[],int front,int *rear){
    if(front==*rear && empty==0)
        printf("Queue Full\n");
    else{
        *rear==(*rear+1)%N;
        q[*rear]=item;
        if(front==*rear) empty=0;
    }
}
void qdel(int *temp,int q[],int *front,int rear){
    if(qempty(*front,rear))
        *temp=-1;
    else{
        *front=(*front+1)%N;
        *temp=q[*front];
        q[*front]=0;
        if(*front==rear) empty=1;
    }
}
int qfront(int q[],int front,int rear){
    if(!qempty(front,rear))
        return q[(front+1)%N];
    return 0;
}
void display(int q[],int front,int rear){
    int i;
    printf("\n\n");
    printf("\t\t\t Q U E U E \n");
    printf("\t\t\t---------\n\n");

    printf("\t\t Front  ");
    for(i=0;i<N;i++)
        printf("%d ",i);
    printf("Rear\n");

    printf("\t\t %d\t",front);
   // printf("\t\t %d\t",front);
    for(i=0;i<N;i++)
        printf("----");
    printf("\t %d",rear);

    printf("\n\t\t\t ");
    for(i=0;i<N;i++){
        for(i=0;i<N;i++)
            if(q[i]!=0)
                printf("%d ",q[i]);
            else
                printf("  ");
    }
    printf("\n\t\t\t");
    for(i=0;i<N;i++)
        printf("----");

}
