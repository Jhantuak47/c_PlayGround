#include<stdio.h>
int isArrayInSorted(int [],int);
void main(){
    int n,a[10],i;
    printf("enter the size of the array:");
    scanf("%d",&n);

    printf("Enter your value for array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //calling function having if else block....
    (isArrayInSorted(a,n)==1)? printf("Array is sorted"):printf("ARRAY IS NOT SORTED");
}
int isArrayInSorted(int a[],int n){

        if(n==1){
                printf("\nreturning 1\n");
            return 1;
        }
        else if(a[n-1]<a[n-2]){
            printf("\nreturning 0\n");
            return 0;
        }
        else{
            printf("\Executin %d\n",n);
          return  isArrayInSorted(a,n-1);
        }
}
/*int isArrayInSortedOrderd(int a[],int n){

       if(n==0){
        return n;
       }
       return (a[n-1]<a[n-2])?0:isArrayInSortedOrderd(a[],n-1);
}*/
