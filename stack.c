#include<stdio.h>
#include<conio.h>

#define N 5 //size of stack

int isempty(int top){
    if(top==-1)
        return 1;
    return 0;
}

int peep(int s[],int top){
    if(isempty(top)){
        printf("\n\n Error: Stack is  empty");
        return 0;
    }
    else 
        return s[top];
}

void push(int item,int s[],int n,int *top){
    if(*top>=n-1)
        printf("\nERROR :-Stack Full");
    else{
        *top=*top+1;
        s[*top]=item;
        printf("%d Added",item);
    }
}
 
void pop(int *item,int s[],int *top){
    if(isempty(*top)){
        printf("ERROR :-Stack is empty");
        *item=0;
    }
    else{
        *item=s[*top];
        *top=*top-1;
    }
}

void display(int s[],int top){
    int i;
    printf("\n\n");
    printf("\t\t\t\t Stack \n");
    printf("\t\t\t\t------\n");
    for(i=N-1;i>=0;--i){
        printf("\t\t\t\t :");
        if(i<top)
            printf("%d :\n",s[i]);
        else if(i==top)
            printf("%d  :<--top  \n",s[i]);
        else
            printf("   :\n");
    }
        printf("\t\t\t\t  -------\n");
    getch();
}

void main(){
    int s[N],top=-1;
    int item,c;

    do{
        printf("\t\t  Menu \n");
        printf("\t 1. Create Stack\n");
        printf("\t 2. Isempty Stack\n");
        printf("\t 3. Top of Stack\n");
        printf("\t 4. PUSH on Stack\n");
        printf("\t 5. POP from Stack\n");
        printf("\t 6. Q U I T\n\n\n");


        printf("\t Enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1: //create
                    top=-1;
                    printf("Stack Created.");
                    break;
            case 2://Is empty
                    if(isempty(top))
                        printf("Stack is Empty.");
                    else
                        printf("Stack is not Empty.");
                    break;
            case 3://Top
                    item=peep(s,top);
                    if(item!=0)
                        printf("Top item of stack is: %d",item);
                    break;
            case 4://push
                    printf("Enter element you want to add :");
                    scanf("%d",&item);
                    push(item,s,N,&top);
                    break;
            case 5://POP
                    pop(&item,s,&top);
                    if(item!=0)
                        printf("%d PoPPed",item);
                    break;
            case 6://Quit
                    printf("G O O D B Y E\n");
                    break;
            default:printf("Wrong Choice....");
                    getch();
                    break;
        }
        display(s,top);
    }
    while(c!=6);
}