#include<stdio.h>
struct node{
    int data;
    struct node *link;
};
typedef struct node Node;
Node* top;

push(int data){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->link = top;
    top = temp;
}
pop(){
    if(top==NULL){
        printf("Stack is empty..!!");
        return;
    }
    Node* temp = top;
    top = top->link;
    printf("\ndeleted Item = %d\n",temp->data);
    free(temp);
}
print(){
      Node* temp = top;
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
void main(){
    top = NULL;
    push(1);
    push(2);push(3);
    push(5);
    push(6);
    push(18);
    print();
    pop();
    print();
}
