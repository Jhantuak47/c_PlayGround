#include<stdio.h>
struct node{
int data;
struct node* next;
};
typedef struct node Node;
Node* front = NULL;
Node* rare = NULL;

int isEmpty(){
    if(rare==NULL&& front==NULL)
        return 1;
    return 0 ;
}

void enQueue(int x){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    if(isEmpty()){
        rare = front = temp;
        return;
    }
    rare->next = temp;
    rare = temp;
}
void deQueue(){
    if(isEmpty()){
        printf("\nsorry! list is empty:\n");
        return;
    }
    /*else if(front==rare){
        printf("\nDeleted Item = %d",front->data);
        front = rare = NULL;
        return;
    }*/
    printf("\nDeleted Item = %d\n",front->data);
    front = front->next;
}

void display(){
    Node* temp = front;
   if(isEmpty()){
        printf("\nsorry! list is empty:\n");
        return;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main(){
   enQueue(5);
   enQueue(15);
   enQueue(25);
   enQueue(35);
   enQueue(45);
   display();
   printf("\n");
   deQueue();
   display();
}
