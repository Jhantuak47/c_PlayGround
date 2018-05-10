#include<stdio.h>
struct node{
    int num;
    struct node *next;
};
typedef struct node Node;
Node *first,*temp,*start;


void insert(){
    int item;
    start = (Node*) malloc(sizeof(Node));
    printf("\n enter no.");
    scanf("%d",&item);
    start->num = item;
    if(first == NULL){
            printf("\n I will execute only one-time ");
      first = start;
      first->next=NULL;
    }
    else{
        printf("second time i will execute:");
           temp=first;
        while(temp->next!=NULL)
                temp = temp->next;
        temp->next=start;
        start->next=NULL;
    }
}
void display(){

    if(first!=NULL){
        temp = first;
        while(temp->next!=NULL){
            printf("%d-->",temp->num);
            temp = temp->next;
        }
         printf("%d",temp->num);
    }
    else
        printf("sorry!! EMPTY LIST..!!.....!!!");
}

void deleteListFromFirst(){
    if(first==NULL)
        printf("List is empty: Nothing is there to delete..!!");
    else if(first->next==NULL){
            temp = first;
            printf("\n Deleted Item is..:%d",temp->num);
            first = NULL;
            free(temp);
    }
    else{
      printf("\nDeleted Item = %d",first->num);
      first = first->next;
    }
}
void deleteListFromMiddle(){
    int position,i;
    if(first==NULL)
        printf("List is empty: Nothing is there to delete..!!");
    else{
            temp = first;
            Node *p;
        printf("enter the position:");
        scanf("%d",&position);
        for(i=1;i<position;i++){
            p=temp;
            temp = temp->next;
        }
        p->next = temp->next;
        printf("Deleter Item = %d",temp->num);
        free(temp);
    }
}
void main(){
    int choise;
    first = NULL;
    char ch;

    do{
        printf("Press 1 For Inserting Last,\npress 2 For Displaying The list,\nPress 3 for Deleting From List");
        printf("ENTER YOUR CHOISE:");

        scanf("%d",&choise);
        switch(choise){
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            deleteListFromFirst();
            break;
        default:
        printf("Invalid input...");
        }
        printf("\nWish to continue..?(y/N):");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
}
