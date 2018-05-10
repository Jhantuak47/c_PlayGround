#include<stdio.h>
void swap(int*);
void main(){
char str[5]="abc";
int *ptr;
ptr = &str[0];
printf("before swaping: ");
puts(str);
swap(ptr);
printf("\nAfter swaping : ");
puts(str);
}
swap(int *i){
    char temp;
    temp = *i;
    *i=++*i;
    *i=temp;
}
