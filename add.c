//1. Addition of two numbers of any lengths.
#include <stdio.h>
#include <string.h>

void split_no(char s[],char s1[],char s2[])
{	int i,j;
	i=0;
	while(s[i]!='\0'&&s[i]!='.')
		s1[i++]=s[i];
	s1[i]='\0';
	j=i;
	i=0;
	if(s[j]!='\0')
		while(s[j++]!='\0')
			s2[i++]=s[j];
	s2[i]='\0';
}

void rev(char s[])
{	int i,l;
	char c;
	l=strlen(s)-1;
	i=0;
	while(i<=l)
	{	c=s[i];
		s[i]=s[l];
		s[l]=c;
		++i;--l;
	}
}

int add_no(char a[],char b[],char sum[],int c)
{   int i=0,s;
	while(a[i]!='\0')
	{	s=a[i]+b[i]-96+c;
		sum[i]=s%10+48;
		c=s/10;
		++i;
	}
	sum[i]='\0';
	return c;
}

void setequal(char s1[],char s2[])
{   int l1,l2;
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1<l2)
	{	while(l1<l2)
			s1[l1++]='0';
		s1[l1]='\0';
	}
	else
	{	while(l2<l1)
			s2[l2++]='0';
		s2[l2]='\0';
	}
}

void main()
{   char a[100],b[100],s1[70],s2[70];
	char a1[20],a2[20],b1[20],b2[20];
	int c=0;
	printf("\n\nEnter first numbers\n");
	gets(a);
	printf("\n\nEnter second numbers\n");
	gets(b);
	split_no(a,a1,a2);
	split_no(b,b1,b2);
	//int addition
	rev(a1);
	rev(b1);
	setequal(a1,b1);
	//float addition
	setequal(a2,b2);
	rev(a2);
	rev(b2);
	c=add_no(a2,b2,s2,0);
	rev(s2);
	//int addition
	c=add_no(a1,b1,s1,c);
	rev(s1);
	strcat(s1,".");
	strcat(s1,s2);
	printf("\nsum=%s",s1);
}
