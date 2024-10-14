#include <stdio.h>
int main ()
{
	int a[3][3],b[3][3],r,c,r1,c1,i1,j1,i,j,s;
	printf("1 enter the  no of rows and cols");
	scanf("%d %d",&r,&c);
		printf("2 enter the  no of rows and cols");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{ 
		printf( "enter a[%d][%d]-> ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
	}
		printf("\n");
	}
	for(i1=0;i1<r1;i1++)
	{
		
		for(j1=0;j1<c1;j1++)
		{ 
		printf( "enter a[%d][%d]-> ",i1,j1);
		scanf("%d",&a[i][j]);
		}
	}
		for(i1=0;i1<r1;i1++)
		{
		for(j1=0;j1<c1;j1++)
		{
			printf("%d \t",a[i1][j1]);
	}
		printf("\n");
}


	return 0;
}
