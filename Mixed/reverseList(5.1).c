#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node Node;

Node* reverse(Node* head){
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
    return head;
}
Node* insert(Node *head , int data){
    Node *start = (Node*)malloc(sizeof(Node));
    start->data = data;
    start->next = head;
    if(head==NULL){
        start->next = head;
        head = start;
        return head;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = start;
    start->next = NULL;
    return head;
}
print(Node* head){
      Node* temp = head;
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main(){
    Node* head;
    head = NULL;
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    head = insert(head,5);
    head = insert(head,6);
    print(head);
    printf("\nReverse List....\n");
    head = reverse(head);
    print(head);
}
