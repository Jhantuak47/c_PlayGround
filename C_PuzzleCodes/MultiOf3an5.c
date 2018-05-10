#include<stdio.h>
int main(){
    int x,n,result = 0,i;

    scanf("%d",&n);

    while(n!=0){
        scanf("%d",&x);
        result = 0;
        for(i=1;i<x;i++){
            if(i%3==0||i%5==0){
                result = result+i;
            }
        }
        printf("%d\n",result);
        n--;
    }

}
