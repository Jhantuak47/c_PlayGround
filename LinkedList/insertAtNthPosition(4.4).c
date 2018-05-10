#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
Node* head;

void insert(int data,int n){
    int i;
    Node* start =(Node*) malloc(sizeof(Node));
    start->data = data;
    start->next = NULL;

    if(n==1){
        start->next = head;
        head = start;
        return;
    }
    Node* temp = head;
    for(i=1;i<n-1;i++){
        temp = temp->next;
    }
    start->next = temp->next;
    temp->next = start;
}
void print(){
    Node* temp = head;
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main(){
    head = NULL;
    insert(2,1);//LIST 2
    insert(3,2);//LIST 2,3
    insert(4,1);//LIST 4,2,3
    insert(5,2);//LIST 4,5,2,3
    insert(6,1);//LIST 6,4,5,2,3
    print();
}
