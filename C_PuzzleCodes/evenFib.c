#include <stdio.h>
int main()
{
int test;
    int temp;
    scanf("%d",&test);
    while(test--){
        unsigned long long int last;
        scanf(" %llu",&last);
        unsigned long long int sum = 0;
        unsigned long long int a=1;
        unsigned long long int b=1;

        while(b<=last){
            if(b%2==0){
                sum +=b;
            }
           temp = a+b;
           a=b;
           b=temp;
        }
        printf("%llu\n",sum);
    }
    return 0;
}
