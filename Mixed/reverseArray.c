#include<stdio.h>
void reverseArray(int x[],int n,int start,int last){
    int temp;
    while(start<last){
       temp = x[last];
        x[last]=x[start];
        x[start]=temp;
        start++;
        last--;
    }
}
void printArray(int x[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",x[i]);
    }
}
int main(){
    int arr[10],i,n;
    printf("\nEnter Size of array ?");
    scanf("%d",&n);
    printf("\nEnter Elements of array :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printArray(arr,n);

    printf("\nReversed Array:\n");
    reverseArray(arr,n,0,n-1);
    printArray(arr,n);
}
