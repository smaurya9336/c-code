//3. Sparse Matrices and its transpose.
#include <stdio.h>

void main()
{	int x[10][10],a[20][3],b[20][3];
	int m,n,i,j,t=1,q,col,p;
	printf("Program to convert Normal Matrix in Sparse Matrix\n");

	printf("Enter dimensions of 2D matrix :");
	scanf("%d %d",&m,&n);

	a[0][1]=m;a[0][2]=n;
	printf("Enter matrix elements\n");
	for(i=1;i<=m;++i)
	{   printf("Enter elements of %d row\n",i);
		for(j=1;j<=n;++j)
		{	scanf("%d",&x[i][j]);
			if(x[i][j]!=0)
			{	a[t][1]=i;
				a[t][2]=j;
				a[t++][3]=x[i][j];
			}
		}
	}
	--t;
	a[0][3]=t;

	//Saparse Matrix
	printf("\nSparse Matrix is\n");
	printf("\t\tSno :\tRow\tCol\tValue\n");
	printf("\t\t_________________________________\n");
	for(i=0;i<=t;++i)
		printf("\t\t%d   :\t%d\t%d\t%d\n",i,a[i][1],a[i][2],a[i][3]);

	//find transpose
	m=a[0][1];
	n=a[0][2];
	t=a[0][3];
	b[0][1]=n;b[0][2]=m;b[0][3]=t;
	q=0;
   //	clrscr();
	printf("\nSparse Transpose is\n");
	printf("\t\tSno :\tRow\tCol\tValue\n");
	printf("\t\t_________________________________\n");
	printf("\t\t%d   :\t%d\t%d\t%d\n",q,b[q][1],b[q][2],b[q][3]);
	if(t<=0)
		printf("Empty matrix");
	else
	{	q=1;
		for(col=1;col<=n;++col)
			for(p=1;p<=t;++p)
			{	if(a[p][2]==col)
				{	b[q][1]=a[p][2];
					b[q][2]=a[p][1];
					b[q][3]=a[p][3];
					printf("\t\t%d   :\t%d\t%d\t%d\n",q,b[q][1],b[q][2],b[q][3]);
					++q;
				}
			}
	}
}


