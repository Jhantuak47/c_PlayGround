#include<stdio.h>

int add(int param1, int param2) {
    return (param1+param2);
}
int  main(){
    int x,y;
    x=1,y=2;
    printf("sum = %d",add(x,y));
    return 0;
}
