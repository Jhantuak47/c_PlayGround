#include<stdio.h>
struct node{
    int num;
    struct node *next;
};
typedef struct node Node;
Node *first,*temp,*start;


void insertLast(){
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
void main(){
    int choise;
    first = NULL;
    char ch;

    do{
        printf("Press 1 For Inserting Last,\npress 2 For Displaying !\n");
        printf("ENTER YOUR CHOISE:");

        scanf("%d",&choise);
        switch(choise){
        case 1:
            insertLast();
            break;
        case 2:
            display();
            break;
        default:
        printf("Invalid input...");
        }
        printf("\nWish to continue..?(y/N):");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
}
