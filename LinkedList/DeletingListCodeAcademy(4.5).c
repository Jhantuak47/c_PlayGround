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
print(){
      Node* temp = head;
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

deleteFromPosition(int pos){
    int i;
    Node* temp1 = head;
    if(pos==1){
        head = temp1->next;
        free(temp1);
        return;
    }
    for(i=0;i<(pos-2);i++){
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
void main(){
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();
    deleteFromPosition(2);
    print();
    deleteFromPosition(4);
    print();
    deleteFromPosition(1);
    print();
}
