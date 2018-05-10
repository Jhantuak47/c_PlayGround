#include<stdio.h>
#define MAX_SIZE 10
int x[MAX_SIZE];
int top = -1;

push(int data){
   if(top==MAX_SIZE-1) {
        printf("Stack is overflow..!!");
        return;
   }
    x[++top] = data;
}

pop(){
    if(top==-1)
        printf("stack is empty..!!");
    else{
        printf("\nDeleted Item = %d",x[top]);
        top=top-1;
    }
}
print(){
    int i=0;
    printf("\nStack:");
    for(i=0;i<=top;i++)
        printf(" %d ",x[i]);
}

int Top(){
    if(top==-1)
    {
        printf("Stack is empty..!!");
        return 0;
    }
    return x[top];
}
int isEmpty(){
    if(top==-1)
        return 1;
    return 0;
}

void main(){
    push(1);
    push(2);
    push(4);
    push(5);
     push(6);
     print();
     pop();
     print();

}
