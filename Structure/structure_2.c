//Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    int age;
    int m;
}s[2];
int main() {
    for(int i=0;i<2;i++){
        printf("enter details of student number %d",i+1);
        scanf("%d%s%d%d",&s[i].roll,s[i].name,&s[i].age,&s[i].m);
    }
    for(int i=0;i<2;i++){
        printf("\nroll no.=%d\nname=%s\nage=%d\nmarks is=%d",s[i].roll,s[i].name,s[i].age,s[i].m);
    }
}