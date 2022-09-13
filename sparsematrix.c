//4. Sparse Matrices addition.
#include <stdio.h>
#include <conio.h>

void main()
{	int x1[10][10],x2[10][10],x3[10][10];    //normal matrix
	int s1[20][3],s2[20][3],s3[30][3];  //sparse matrix
	int m,n,i,j,t,p1,p2,p3;

	//read first matrix and convert it in sparse
	printf("Enter Ist normal matrix\n");
	printf("Enter dimensions of first matrix :");
	scanf("%d %d",&m,&n);

	s1[0][0]=m;s1[0][1]=n;t=1;
	printf("Enter matrix elements\n");
	for(i=0;i<m;++i)
	{   printf("Enter elements of %d row\n",i+1);
		for(j=0;j<n;++j)
		{	scanf("%d",&x1[i][j]);
			if(x1[i][j]!=0)
			{	s1[t][0]=i+1;
				s1[t][1]=j+1;
				s1[t++][2]=x1[i][j];
			}
		}
	}
	--t;
	s1[0][2]=t;

	//Print first sparse matrix
	//	clrscr();
	printf("First Matrix is\n");
	for(i=0;i<m;++i)
	{	for(j=0;j<n;++j)
			printf("\t%d",x1[i][j]);
		printf("\n");
	}
	printf("\nSparse Matrix is\n");
	printf("\tSno :\tRow\tCol\tValue\n");
	printf("\t_________________________________\n");
	for(i=0;i<=t;++i)
		printf("\t%d   :\t%d\t%d\t%d\n",i,s1[i][0],s1[i][1],s1[i][2]);
	getch();

	//read second matrix and convert it in sparse
	printf("Enter 2nd normal matrix\n");
	printf("Enter dimensions of 2D matrix :");
	scanf("%d %d",&m,&n);

	s2[0][0]=m;s2[0][1]=n;t=1;
	printf("Enter matrix elements\n");
	for(i=0;i<m;++i)
	{   printf("Enter elements of %d row\n",i+1);
		for(j=0;j<n;++j)
		{	scanf("%d",&x2[i][j]);
			if(x2[i][j]!=0)
			{	s2[t][0]=i+1;
				s2[t][1]=j+1;
				s2[t++][2]=x2[i][j];
			}
		}
	}
	--t;
	s2[0][2]=t;

	//Print second sparse matrix
   //	clrscr();
	printf("Second Matrix is\n");
	for(i=0;i<m;++i)
	{	for(j=0;j<n;++j)
			printf("\t%d",x2[i][j]);
		printf("\n");
	}
	printf("\nSparse Matrix is\n");
	printf("\tSno :\tRow\tCol\tValue\n");
	printf("\t_________________________________\n");
	for(i=0;i<=t;++i)
		printf("\t%d   :\t%d\t%d\t%d\n",i,s2[i][0],s2[i][1],s2[i][2]);
	getch();

   //sparse Addition
	if(s1[0][0]==s2[0][0]&&s1[0][1]==s2[0][1])
	{	   	p1=1;p2=1;t=1;
			s3[0][0]=s1[0][0];s3[0][1]=s1[0][1];
			while(p1<=s1[0][2] && p2<=s1[0][2])
			{ 	if(s1[p1][0]==s2[p2][0] && s1[p1][1]==s2[p2][1])
				{ 	s3[t][0]=s1[p1][0];
					s3[t][1]=s1[p1][1];
					s3[t++][2]=s1[p1++][2]+s2[p2++][2];
				}
				else if(s1[p1][0]<s2[p2][0])
				{  s3[t][0]=s1[p1][0];
				   s3[t][1]=s1[p1][1];
				   s3[t++][2]=s1[p1++][2];
				}
				else
				{	s3[t][0]=s2[p2][0];
					s3[t][1]=s2[p2][1];
					s3[t++][2]=s2[p2++][2];
				}
			}

			//copy remaining elements of matrix1
			while(p1<=s1[0][2])
			{    s3[t][0]=s1[p1][0];
				 s3[t][1]=s1[p1][1];
				 s3[t++][2]=s1[p1++][2];
			}
			//copy remaining elements of matrix2
			while(p2<=s2[0][2])
			{  	s3[t][0]=s2[p2][0];
				s3[t][1]=s2[p2][1];
				s3[t++][2]=s2[p2++][2];
			}
			--t;
			s3[0][2]=t;

			//print added sparse matrix
			printf("\nAdded Sparse Matrix is\n");
			printf("\tSno :\tRow\tCol\tValue\n");
			printf("\t_________________________________\n");
			for(i=0;i<=t;++i)
				printf("\t%d   :\t%d\t%d\t%d\n",i,s3[i][0],s3[i][1],s3[i][2]);
		   //convert sparse into normal
			m=s3[0][0];n=s3[0][1];t=s3[0][2];
			for(i=0;i<m;++i)
				for(j=0;j<n;++j)
					x3[i][j]=0;

			for(i=1;i<=t;++i)
				x3[s3[i][0]-1][s3[i][1]-1]=s3[i][2];

			//print normal matrix
			printf("Added Normal Matrix is\n");
			for(i=0;i<m;++i)
			{	for(j=0;j<n;++j)
					printf("\t%d",x3[i][j]);
				printf("\n");
			}
	}
	else
		printf("\n\nDimension of both matrix does not match.\nAddition not possible");
}
