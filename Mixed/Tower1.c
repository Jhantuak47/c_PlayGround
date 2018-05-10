#include<stdio.h>
void towerOfHanoi(int,char,char,char);
void main(){
    int n;

    printf("enter no. of peg:");
    scanf("%d",&n);

    towerOfHanoi(n,'s','a','d');
}
void towerOfHanoi(int n,char sou,char aux,char des){
        if(n==1)
            printf("%c --> %c\n",sou,des);
        else
        {
            towerOfHanoi(n-1,sou,des,aux);
            towerOfHanoi(1,sou,aux,des);
            towerOfHanoi(n-1,aux,sou,des);
        }
}
