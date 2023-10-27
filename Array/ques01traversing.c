// Transversing an array
#include <stdio.h>
int main()
{
int n,i;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);}
printf("The elements are :");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);}
return 0;
}