#include<stdio.h>
/*maximum at each row and maximum at each column */
void main(){
    int arr[10][10],i,j,k,max;
    int row_max[10],col_max[5];

    printf("Enter your matrix:");
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d,%d",&arr[i][j]);
        }
    }

    for(i=0;i<4;i++){

      //finding row max...
      max = arr[i][0];
      for(j=0;j<4;j++){
          if(arr[i][j]>max){
            max = arr[i][j];
          }
        }

      row_max[i] = max;

      //finding column max....
      max = arr[0][i];
     for(k=0;k<4;k++){
        if(arr[k][i]>max)
            max = arr[k][i];
    }

     col_max[i] = max;
   }

   for(j=0;j<4;j++){
        printf("\n\nmax at row -[%d] = %d",j,row_max[j]);
        printf(" & max at col -[%d] = %d",j,col_max[j]);
   }
    printf("\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d%d",arr[i][j]);
        }
        printf("\n");
    }

}
