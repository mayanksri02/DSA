#include<stdio.h>
int main(){
    int n, m,c[30];

    printf("Enter size of array A: ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter elements of array A: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of array B: ");
    scanf("%d",&m);
    int b[m];
    
    printf("Enter elements of array B: \n");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while((i<n)&&(j<m)){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]==b[j]){
            c[k]=a[i];
            k++;
            i++;
            j++;
        }

    }
    for(int i=0;i<k;i++){
        printf("% d",c[i]);
    }
}