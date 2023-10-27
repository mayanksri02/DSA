//Program for Stack Primitive Operations
#include<stdio.h>
int top=-1,stack[50],n,x;
void push(){
    if(top>=n-1){
        printf("Overflow");
    }
    else{
        top=top+1;
        printf("Enter element to be inserted");
        scanf("%d",&x);
        stack[top]=x;
        printf("pushed %d ",stack[top]);
    }
}
void pop(){
    if(top<=-1){
        printf("Underflow");
    }
    else{
        x=stack[top];
        printf("Deleted element %d\n",x);
        top=top-1;
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int main() {
    int choice;
    printf("Enter the size of stack: \n");
    scanf("%d",&n);
    
    do{
        printf("Enter choice \n 1. Push\n 2. Pop\n3. Display");
    scanf("%d",&choice);
        switch(choice){
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
            break;
            default: printf("\nEXIT ");

        }
    }
    while(choice<4);
}