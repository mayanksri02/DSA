#include<stdio.h>
int fact(int n,int p,int f){
    if(p==0){
        return f;
    }
    return fact(n,p-1,f*n);
}
int main(){
    int n,p;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    printf("%d",fact(n,p,1));
}