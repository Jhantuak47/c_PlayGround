#include<stdio.h>
void binary(int n,char a[]){
    if(n<1){
        printf("%s\n",a);
    }
    else
    {
        a[n-1]=0;
        binary(n-1,a);
        a[n-1]=1;
        binary(n-1,a);
    }
}
void main(){
    char a[11];
    a[10]='/0';
    binary(10,a);
}
