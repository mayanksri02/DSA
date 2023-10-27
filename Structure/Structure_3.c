//3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    int age;
    char add[20];
    int m;
}s[15];
int main() {
    for(int i=0;i<15;i++){
        printf("enter details of student number %d",i+1);
        scanf("%d%s%d%s%d",&s[i].roll,s[i].name,&s[i].age,s[i].add,&s[i].m);
    }
    for(int i=0;i<15;i++){
        printf("\nroll no.=%d\nname=%s\nage=%d\naddress=%s\nmarks is=%d",s[i].roll,s[i].name,s[i].age,s[i].add,s[i].m);
    }
}