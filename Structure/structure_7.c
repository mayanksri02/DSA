//7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float ch;
    float mm;
    float pm;
    
}Marks[2];
int main() {
    float per[2];
    for(int i=0;i<2;i++){
        printf("enter details of student number %d\n",i+1);
        scanf("%d%s%f%f%f",&Marks[i].roll,Marks[i].name,&Marks[i].ch,&Marks[i].mm,&Marks[i].pm);
        per[i]=(Marks[i].ch+Marks[i].mm+Marks[i].pm)/3;
    }
    for(int i=0;i<2;i++){
        printf("percentage of %s is %.2f\n",Marks[i].name,per[i]);
    }
}