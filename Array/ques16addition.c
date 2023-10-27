// Matrix addition
#include <stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the row nos:");
    scanf("%d",&m);
    printf("Enter the column nos:");
    scanf("%d",&n);
    int a[20][20], b[20][20] ,c[20][20];
    printf("Enter the elements of the first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[m][n]);
        }
    }
    printf("Enter the elements of the second matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[m][n]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The matrix after addition is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}