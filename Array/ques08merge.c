// MERGE TWO SORTED ARRAY
#include<stdio.h>
int main(){
    int n,m;
    int a[10],b[10],c[30];
    printf("Enter the size of 1st array:");
    scanf("%d",&n);
    printf("Enter the size of 2nd array:");
    scanf("%d",&m);
    printf("enter elements of 1st array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements of 2nd array");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(n<m){
        while(j<m){
            c[k]=b[j];
            k++;
            j++;
        }
    }
    else{
        while(i<n){
            c[k]=a[i];
            i++;
            k++;
        }
    }
    printf("the sorted merged array is:\n");
    for(int i=0;i<(m+n-1);i++){
        printf("%d",c[i]);
        
    }

}