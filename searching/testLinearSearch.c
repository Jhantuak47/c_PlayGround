#include<stdio.h>
void main(){
    int x[6]={1,2,3,4,5,6},position;

    position = linearSearch(x,4,6);

    printf("\nElement is found at position:%d\n",position+1);

}
int linearSearch(int* Array,int value,int size){
    int i;
    printf("\nsize of array = %d\n",size);
    for(i=0;i<size;i++){
        if(Array[i]==value){
           break;
        }
    }
    return i;
}
