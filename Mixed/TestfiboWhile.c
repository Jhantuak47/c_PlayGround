#include<stdio.h>
void fibo(int[],int);
void main(){
    int arr[10],len;
    arr[0]=0;
    arr[1]=1;
    printf("enter your sequence:");
    scanf("%d",&len);
    fibo(arr,len);
}
void fibo(int arr[], int len){

    int num1=arr[0],num2=arr[1],next,cnt=2,i;
    while(cnt<len){
        next = num1+num2;
        num1=num2;
        num2=next;
        arr[cnt]=next;
        cnt++;
    }
    for(i=0;i<len;i++){
        printf("%d  ",arr[i]);
    }
}
