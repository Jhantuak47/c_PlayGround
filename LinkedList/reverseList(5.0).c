#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node Node;
Node* head;
void reverse(){
    Node *prev,*next,*current;
    prev=NULL;
    current = head;
    while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
    }
    head = prev;
}
insert(int data){
    Node *start = (Node*)malloc(sizeof(Node));
    start->data = data;
    start->next = head;
    if(head==NULL){
        start->next = head;
        head = start;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = start;
    start->next = NULL;
}
print(){
      Node* temp = head;
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main(){
        head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();
    printf("\nReverse List....\n");
    reverse();
    print();
}
