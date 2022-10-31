#include <stdio.h>
//#include <alloc.h>
#include <conio.h>
#include <process.h>

struct node
{	int data;
	struct node *link;
};

typedef struct node node;

node *getnode()
{	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->link=NULL;
	return temp;
}

void delnode(node *temp)
{	free(temp);
}

node *create()
{  	int n;
	node *first,*temp,*temp1;
	printf("\n\t\tEnter list elements (-1) to end\n");
	scanf(" %d",&n);
	first=getnode();
	first->data=n;
	temp=first;
	scanf(" %d",&n);
	while(n!=-1)
	{	temp1=getnode();
		temp1->data=n;
		temp->link=temp1;
		temp=temp1;
		scanf(" %d",&n);
	}
	return first;
}

void concat(node *l1,node *l2)
{	while(l1->link!=NULL)
		l1=l1->link;
	l1->link=l2;
}

node *delitem(node *list,int x)
{	node *temp,*temp1;
	temp=list;
	if(list->data==x)
	{	list=list->link;
		delnode(temp);
		printf("\t\tItem was first element, deleted..");
	}
	else
	{ 	while(temp->link->data!=x && temp->link!=NULL)
			temp=temp->link;
		if(temp->link==NULL)
			printf("\t\t Element not found..");
		else
		{	temp1=temp->link;
			temp->link=temp->link->link;
			delnode(temp1);
			printf("\t\tElement was in between, deleted");
		}
	}
	return list;
}

node *insert(node *first,int i, int n)
{   //insert element n after element i (-1) if at first
	node *newnode,*temp1;

	newnode=getnode();
	newnode->data=n;
	if(i==-1)
	{	newnode->link=first;
		first=newnode;
		printf("\n\t\tNode Successfully inserted at start.");
	}
	else
	{	temp1=first;
		while(temp1->data!=i && temp1!=NULL)
			temp1=temp1->link;

		if(temp1==NULL)
			printf("\n\t\t\Element not found in list\n");
		else
		{	newnode->link=temp1->link;
			temp1->link=newnode;
			printf("\n\t\tNode Successfully inserted in between");
		}
	}
	return first;
}

node *invert(node *x)
{	node *p,*q,*r;
	p=x;q=NULL;
	while(p!=NULL)
	{	r=q;
		q=p;
		p=p->link;
		q->link=r;
	}
	return q;
}

int count(node *list)
{	int x=0;
	while(list!=NULL)
	{	++x;
		list=list->link;
	}
	return x;
}

void display(node *temp)
{   printf("\n\t\t List is\n\n\t");
	printf(" First-> ");
	while(temp!=NULL)
	{	printf(" %d -> ",temp->data);
		temp=temp->link;
	}
	printf(" END\n");
}

int menu()
{	int n;
	while(1)
	{
		printf("\n\n\t\t M E N U\n");
		printf("\t\t _______\n\n");
		printf("\t\t 1. Create\n");
		printf("\t\t 2. Display\n");
		printf("\t\t 3. Count\n");
		printf("\t\t 4. Insert\n");
		printf("\t\t 5. Delete\n");
		printf("\t\t 6. Concatenate\n");
		printf("\t\t 7. Invert\n");
		printf("\t\t 8. Q U I T\n\n\n");
		printf("\t\t Enter your choice : ");
		scanf(" %d",&n);
		if(n>=1 && n<=8) return n;
		printf("\n\t\tWrong Choice....Try Again");
		getch();
	}
}

void main()
{	int choice,item,n;
	node *list1,*list2;
	while(1)
	{	choice=menu();
		switch(choice)
		{	case 1: //create
					list1=create();
					printf("\t\t List Created.");
					break;
			case 2: //display
					display(list1);
					break;
			case 3: //count
					item=count(list1);
					printf("\t\tList has %d items",item);
					break;
			case 4: //insert
					printf("Enter element after which you want to insert (-1) at start\n");
					scanf("%d",&item);
					printf("Enter data to insert :");
					scanf("%d",&n);
					list1=insert(list1,item,n);
					break;
			case 5: //delete
					printf("\n\t\tEnter element you ant to delete : ");
					scanf(" %d",&item);
					list1=delitem(list1,item);
					break;
			case 6: //concat
					list2=create();
					concat(list1,list2);
					printf("\n\t\tList Concatenated..");
					break;
			case 7: //invert
					list1=invert(list1);
					printf("\n\t\tList Inverted..");
					break;
			case 8: //quit
					printf("\n\n G O O D  B Y E");
					getch();
					exit(0);
					break;
		}
	
	}
}
