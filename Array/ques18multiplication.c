// Multiplication of matrix
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[30][30],b[30][30],i,j,r,c,s[30][30],k,sum;
	printf("Enter the no of rows");
	scanf("%d",&r);
	printf("Enter the no of columns");
	scanf("%d",&c);
	printf("\nEnter the elements in matrix 1\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the value of a%d%d",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements in matrix 2\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the value of b%d%d",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix 1 is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe matrix after multiplication is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<r;k++)
			{
				sum=0;
				sum=sum+a[i][k]*b[k][j];
				s[i][j]=sum;
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",s[i][j]);
		}
		printf("\n");
	}
	getch();
}