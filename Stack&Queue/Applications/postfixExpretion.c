#include<stdio.h>
#include<string.h>
int top=-1;
//char myStack[10];
void main(){
    char exp[10];
    printf("Enter your expression:");
    gets(exp);
    printf("our expression is :");;
    puts(exp);
    evaluateExpression(exp);
}

evaluateExpression(char *exp){
    int i,len = strlen(exp),res;
    char myStack[10];
    char op1,op2;
    for(i=0;i<len;i++){
        if(exp[i]=='*'|| exp[i]=='+'|| exp[i]=='-'|| exp[i]=='/'){
            op2 = pop(myStack);
            op1 = pop(myStack);
            printf("\n operator = %c",exp[i]);
            res = perform(exp[i],op2,op1);
            push(res,myStack);
        }
        else{
                printf("\n I am at this place...");
                printf("value of exp[%d] = %c",i,exp[i]);
           top =  push(exp[i],myStack);
        }
    }
    printf("solution = %d",res);
}

int push(char* operand, char *x){
    int max_size = 10;
    printf("let see the %d\noperand = %c",max_size,operand);
    if(top == max_size)
        return;
  x[++top]=operand;
  printf("\n value for x=%c and top = %d\n",x[top],top);
  return top;
}

 pop(char* x){
     char values;
        if(top==-1){
            printf("stack is empty..!!");
            return 'x';
        }

    else{
           values = x[top];
        top=top-1;
        return values;
    }
}
int perform(char* operators,char* op2,char* op1){
    float num1,num2;
    num1 = (float)op1;
    num2 = (float)op2;
    printf("\n value op2 = %c\nvalue of num2 = %d\n",op2,num2);
    printf("\n value op1 = %c\nvalue of num1 = %d\n",op1,num1);
    int result;
    char x;
    x = operators;
    switch(x){

    case '*':
        result = (int)(num1*num2);
        printf("\nRESULT = %d\n",result);
        break;

    case '+':
        result = (num2+num1);
        break;

    case '-':
        result = (num2-num1);
        break;

    case '/':
        result = (num2/num1);
        break;

    }
    return result;
}
