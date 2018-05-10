//finding negative integer from row and col.

#include<stdio.h>

void printMatrix(int Matrix[]){

}
void main(){
     int i,j;
    int matrix[10][10];
    printf("Enter your value:");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("\t%d ",matrix[i][j]);
            printf("\n");
    }
}
