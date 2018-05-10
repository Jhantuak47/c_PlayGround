#include<stdio.h>
void main(){
    int x[10],position,n, i, j, value;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i<n; i++)
    scanf("%d", &x[i]);

    sort(x,n);
    printf("\nYour Array:\n");

     for ( i = 0 ; i < n ; i++ )
        printf("%d ", x[i]);

     printf("\nEnter Element to Search:");
     scanf("%d",&value);
    position = bSearch(value,0,n,x);

    printf("\nElement is found at position:%d\n",position+1);

}
int bSearch(int value,int left,int right,int* x){

        int mid = (left+right)/2;

        if(x[mid]==value){

            return mid;
        }
        else if(x[mid]>value){
            bSearch(value,left,mid-1,x);
        }
        else {
            bSearch(value,mid+1,right,x);
        }
}
void sort(int* array,int n){
  int i, j, swap;

  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) /* For decreasing order use < */
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  return 0;
}
