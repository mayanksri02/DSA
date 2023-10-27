#include<stdio.h>
int fact(int n,int f){
    if(n==1){
        return f;
    }
    return fact(n-1,f*n);
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("%d",fact(n,1));
}