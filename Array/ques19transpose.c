// Transpose of matrix
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[30][30],trans[30][30],i,j,r,c;
	printf("Enter the no of rows");
	scanf("%d",&r);
	printf("Enter the no of columns");
	scanf("%d",&c);
	printf("\nEnter the elements in matrix a\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the value of a%d%d \t",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe transpose of matrix is \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			trans[i][j]=a[j][i];
			printf("%d \t",trans[i][j]);
		}
		printf("\n");
	}
}