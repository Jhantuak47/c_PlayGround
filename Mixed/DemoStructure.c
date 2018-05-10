#include<stdio.h>
void main(){
    struct student
        {
            int r,m;
            char name[30];
        }stud;
        printf("Enter roll:");
        scanf("%d",&stud.r);
        printf("Enter marks:");
        scanf("%d",&stud.m);
        printf("Enter name:");
        gets(stud.name);
        printf("")
}
