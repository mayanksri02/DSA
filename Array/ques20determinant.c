// Determinant of matrix
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[30][30],i,j,r,c;
	long determinant;
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
	determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
	printf("\nThe determinant of matrix is %d",determinant);
}