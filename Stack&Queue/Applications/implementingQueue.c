#include<stdio.h>
#define MAX_SIZE 10
int myQueue[MAX_SIZE];
int front=-1,rare=-1;
int isEmpty(){
    if(rare==-1&&front==-1){
        return 1;
    }
    return 0;
}
void main(){
    int value;
    printf("enter your value = ");
    scanf("%d",&value);
    enQueue(value);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    enQueue(9);
    printf("\n QUEUE::\n");
    display();
    deQueue();
    display();
    deQueue();
    display();

}
int isFull(){
    if(rare==MAX_SIZE-1)
        return 1;
    return 0;
}
void enQueue(value){
    if(isFull()){
       printf("QUEUE IS FULL ...!!\n");
       return;
    }
    if(isEmpty()){
        rare = 0;
        front = 0;
    }
    else
        rare=rare+1;

    myQueue[rare]=value;
}
void deQueue(){
    int item;
    if(isEmpty())
        return;
    else if(rare==front){
       item = myQueue[front];
       rare=front=-1;
        printf("\nDeleted Item  = %d\n",item);
        return;
    }
    item = myQueue[front];
    front = front+1;
    printf("\nDeleted Item  = %d\n",item);
}
void display(){
    int i;
    if(isEmpty()){
        printf("QUEUE IS EMPTY NOTHING IS THERE TO PRINT.");
        return;
    }
    for(i=front;i<=rare;i++)
        printf("%d ",myQueue[i]);
    printf("\n");
}

