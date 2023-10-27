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
    while(n>0){
        int b=n%16;
        push(b);
        n=n/16;
    }
    printf("in hexadecimal: ");
    display();

}