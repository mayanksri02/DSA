#include<stdio.h>
int main(){
    int n, m,c[30],d[30];
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
    int i=0,j=0,k1=0;
    while((i<n)||(j<m)){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else if(a[i]!=b[j] && a[i]<b[j]){
            c[k1]=a[i];
            k1++;
            i++;
        }
        else{
            j++;
        }

    }
    printf("Set difference A - B is\n");
    for(int i=0;i<k1;i++){
        printf("%d ",c[i]);
    }
    int k2=0;
    i=0,j=0;
    while(i<m || j<n){
        if(b[i]==a[j]){
            i++;
            j++;
        }
        else if(b[i]!=a[j] && b[i]<a[j]){
            d[k2]=b[i];
            k2++;
            i++;
        }
        else{
            j++;
        }
    }
    printf("\nSet difference B - A is\n");
    for(int i=0;i<k2;i++){
        printf("%d ",d[i]);
    }
    int e[n+m];
    i=0,j=0;
    int k=0;

    while(i<k1 && j<k2)
    {
        if(c[i]<=d[j])
        {
            e[k]=c[i];
            i++;
        }
        else
        {
            e[k]=d[j];
            j++;
        }
        k++;
    }

    while (i < k1) {
        e[k] = c[i];
        i++;
        k++;
    }

    while (j < k2) {
        e[k] = d[j];
        j++;
        k++;
    }
    printf("\nSymmetric difference of A and B is\n");
    for(int i=0;i<(k1+k2);i++){
        if(e[i]==e[i+1]){
            continue;
        }
        else{
            printf("%d ",e[i]);
        }
        
    }
    
}