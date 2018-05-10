#include<stdio.h>
void main(){
int x[10]={10,29,48,38,13,25,11,2,4,6},i;
int *xptr,result=0;
xptr = &x[0];
printf("Array from pointer:");
for(i=0;i<10;i++){
    if(*xptr%2==0){
       result=*xptr+result;
       printf("%d",*xptr);
       printf(" ");
    }
           xptr++;
}
printf("\n");
printf("result = %d",result);
}
