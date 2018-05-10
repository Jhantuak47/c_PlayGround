#include<stdio.h>
void fact(int[],int,int);
int main(){
    int num,f_num,i,r,j;
    int arr[200]={0};
        scanf("%d",&r);
    for(j=0;j<r;j++){
        scanf("%d",&num);
        f_num = num-1;
        for(i=0;num!=0;++i,num/=10)
            arr[i]=num%10;
        if(f_num<3){
         fact2(arr,i,f_num);
        }
        else
        fact(arr,i,f_num);
    }
    return 0;
}
void fact(int arr[],int m,int f_num){
        int i=0,temp = 0,x;

        while(f_num>1){
            i=0;
            do{
                x = arr[i]*f_num+temp;
                arr[i]=x%10;
                temp = x/10;
                ++i;
            }while(temp!=0||i<=m);

            m=--i;
            --f_num;

        }

        while(m>=0){
            printf("%d",arr[m]);
            arr[m]=0;
            --m;
        }
        printf("\n");
}
void fact2(int arr[],int m,int f_num){
        int i=0,temp = 0,x;
        if(f_num<2){
            if(f_num==1){
                printf("2\n");
                return 0;
            }
            else
                printf("1\n");
                return 0;
        }
        while(f_num>1){
            i=0;
            do{
                x = arr[i]*f_num+temp;
                arr[i]=x%10;
                temp = x/10;
                ++i;
            }while(temp!=0);

            m=--i;
            --f_num;

        }

        while(m>=0){
            printf("%d",arr[m]);
            arr[m]=0;
            --m;
        }
        printf("\n");
}
