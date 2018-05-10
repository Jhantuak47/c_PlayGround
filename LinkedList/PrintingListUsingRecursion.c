#include<stdio.h>
#include<stdio.h>
struct node {
    int data;
    struct node* next;
};
typedef struct node Node;
Node* head;
void insert(int data){
    Node* start = (Node*) malloc(sizeof(Node));
    start->data = data;
    if(head==NULL){
        start->next = head;
        head = start;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = start;
    start->next = NULL;
}
print(Node* p){

    if(p==NULL){
      return ;
    }
    printf("%d ",p->data);
    print(p->next);
}
void main(){
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print(head);
}
