#include<stdio.h>

swap(char *i,char *j){
    char temp;
    temp =*i;
    *i=*j;
    *j=temp;
}

void Permutation(char *str,int i,int n){
    static count;
    int j;
    if(i==n){
        count++;
        printf("\n%d)",count);
        puts(str);
    }
    else{
        for(j=i;j<=n;j++)
        {
            swap(str+i,str+j);
            Permutation(str,i+1,n);
            swap(str+i,str+j);
        }
    }
}
void main(){
 char str[5];
 char *ptr;
 int n,i=0;
printf("enter your String :");
gets(str);
ptr = &str[0];
n = strlen(str)-1;
printf("\nString = %s",str);
printf("\nsize = %d",n);
printf("\nPERMUTATIONS:\n");
Permutation(ptr,i,n);

}
