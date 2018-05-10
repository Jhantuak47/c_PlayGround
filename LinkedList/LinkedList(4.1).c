//Inserting data at beginning and last...
#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *first,*start,*temp;
void insertFirst(){
    int item;
            printf("\n\tEnter you data:");
            scanf("%d",&item);

            start = (NODE*)malloc(sizeof(NODE));//allocating memory for linked list

            start->data = item;

            if(first==NULL){
                    printf("\nAT BEGINNING I HAVE EXECUTED....\n");
                first=start;
                first->next = NULL;
                temp = first;
            }
            else
            {
                   printf("\nAFTER THEN I HAVE EXECUTED....\n");
                start->next = first;
                first = start;
            }
}
void display(){
    temp = first;
    while(temp->next!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
     printf("%d\n",temp->data);
}
void main(){
    int choice;
    char ch;
    first =NULL;

      do{
            printf(" Enter your choice:\n\tPress 1: for inserting at first\n\tPress 2 for inserting at Last\n\tPress 3 for Display..\n");
            scanf("\t%d",&choice);
            switch(choice){
            case 1:
                insertFirst();
                break;
             case 2:
                insertFirst();
                break;
             case 3:
                display();
                break;
            }
        printf("\n\nWHIS TO CONTINUEl.?(Y/N)");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
}
