#include<stdio.h>
int fact(int n,int s){
    if(n==0){
        return s;
    }
    return fact(n/10,s+n%10);
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("%d",fact(n,0));
}