#include<stdio.h>
int main(){
    int a[100000],arr = 0,i,j,ita,max;
    unsigned int sum = 0,num=0;
    int boolean  = 1;
    scanf("%d",&ita);
    while(ita--){
        scanf("%u",&num);
        for(i=2;i<=num;i++){

              boolean  = 1;

            for(j=2;j<i;j++){

                if(i%j==0)

                    boolean = 0;
            }
                if(boolean){
                    if(num%i==0){
                        a[arr] = i;
                        arr++;
                    }

                }
        }
        max = a[0];
        for(i=0;i<arr;i++){
                if(a[i]>max){
                    max = a[i];
                }
        }

        printf("%u\n",max);
        arr=0;
    }
    return 0;
}
