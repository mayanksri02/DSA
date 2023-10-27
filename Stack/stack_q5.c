//Program for Decimal to Binary Conversion
#include <stdio.h>
int top=-1,stack[50],n;
void display(){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
void push(int x){
    top=top+1;
    stack[top]=x;  
}
int main(){
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int m;
    printf("Enter the base value");
    scanf("%d",&m);
    while(n>0){
        int b=n%m;
        push(b);
        n=n/m;
    }
    printf("in any base: ");
    display();

}