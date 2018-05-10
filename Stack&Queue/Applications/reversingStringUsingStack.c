#include<stdio.h>
#include<string.h>
char x[10];
int top = -1;
void reverse(char *c,int len){
    int i;
    for(i=0;i<len;i++)
    {
        push(c[i]);
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        pop();
    }
}
push(char* data){
    x[++top]=data;
}
pop(){
    if(top==-1)return;
    printf("%c",x[top]);
    top = top-1;
}
void main(){
    char c[51];
    printf("enter your string:");
    gets(c);
    printf("Original String:");
    puts(c);
    reverse(c,strlen(c));
}
