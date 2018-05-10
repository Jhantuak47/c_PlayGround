#include<stdio.h>
#include<stdio.h>
void main(){
char string1[30];
char reverse[30];
int len;
printf("Enter your String:");
scanf("%s",&string1);
strcpy(reverse,string1);
printf("reverse String:");
strrev(reverse);
puts(reverse);
if(strcmp(reverse,string1))
    printf("not palindrom");
else
    printf("palindrom:");
}

