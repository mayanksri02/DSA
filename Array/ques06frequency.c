// Check whether the element is repeated or not
#include <stdio.h>
int main(){
    int n,i,j,max,c=1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            c++;
            continue;
        }
        else{
            printf("frequency of %d is %d \n",a[i],c);
            c=1;
        }
    }
    return 0;
}