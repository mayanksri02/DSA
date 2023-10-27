// Inserting an element in an array
#include <stdio.h>
int main()
{
    int n,i,pos,value;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("enter the value into that position:");
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--){ 
        arr[i+1]=arr[i];
    }
    arr[pos-1]= value;
    printf("The final array is:");
    for(i=0;i<n+1;i++)
    {
    printf("%d \t",arr[i]);}
    return 0;
}