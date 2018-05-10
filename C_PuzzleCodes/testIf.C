#include<stdio.h>
int main(){

   int j=0,i=0;
    if(i==1||j==1){
        printf("you are inside if condition");
    }

    j=--i;
    j=6%10;
    printf("\n%d",j);

    j=i--;
    j=6/10;
        printf("\n%d",j);
            return 0;
}
