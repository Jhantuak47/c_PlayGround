#include<stdio.h>
#define MAX_SIZE 5
int myCQueue[MAX_SIZE];
int front,rare;
front=-1;
rare=-1;
void main(){
    cQInsert(3);
    cQInsert(12);
    cQInsert(32);
    cQInsert(22);
    cQInsert(52);
    cQDisplay();
}
isEmpty(){
    if(rare==front&&rare==-1){
        return 1;
    }
    return 0;
}
int isFull(){
    if((rare+1)%MAX_SIZE==front){
       return 1;
    }
    return 0;
}
cQInsert(int x){
    if(!isFull()){
        if(isEmpty()){
            rare=front=0;
        }
        else
            rare = (rare+1)%MAX_SIZE;
        myCQueue[rare]=x;
        return;
    }
    printf("\nCIRCULAR QUEUE IS FULL:\n");
}
cQDeletion(){
    if(isEmpty()){
        printf("\nCircular Queue is empty..");
        return;
    }
    printf("\nDeleted Item  = %d\n",myCQueue[front]);
    if(front==rare)
        front=rare=-1;
    else
        front = (front+1)%MAX_SIZE;
}
cQDisplay(){
    int temp;
    if(isEmpty()){
        printf("\nCircular Queue is empty..");
        return;
    }
    temp=front;
    while((temp+1)%MAX_SIZE!=rare){
        printf("%d ",myCQueue[temp]);
        temp = (temp+1)%MAX_SIZE;
    }
    printf("%d ",myCQueue[temp]);
     temp = (temp+1)%MAX_SIZE;
     printf("%d ",myCQueue[temp]);
}
