#include<stdio.h>
int hcf(int a,int b){
    if(a%b==0){
        return b;
    }
    return hcf(b,a%b);
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("%d",hcf(a,b));
    return 0;
}