#include<stdio.h>
int fibo(int n,unsigned long long int  x[]){
    if(n==0||n==1){
        x[n]=n;
        return n;
    }
    else if(x[n]!=0)
    {
        return x[n];
    }
    else{
        x[n]=fibo(n-1,x)+fibo(n-2,x);
        return x[n];
    }
}
int main(){
    int loop;
    unsigned long int n,i,result;
    unsigned long long int  x[200]={0};
    scanf("%d",&loop);
    while(loop--){

        scanf("%lu",&n);
        n +=2;
       fibo(n,x);
            result = 0;
            for(i=1;i<n;i++){
                    if(x[i]<n){
                        if(x[i]%2==0)
                            result = result+x[i];
                    }
                x[i] = 0;
            }
             printf("%lu\n",result);
    }
    return 0;
}
