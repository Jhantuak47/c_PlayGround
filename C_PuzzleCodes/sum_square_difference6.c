#include<stdio.h>
#include<math.h>
void main(){
    double square_of_sum,sum_of_square;
    int num,i,iteration;
    scanf("%d",&iteration);
    while(iteration--){
        scanf("%d",&num);
        square_of_sum =0;
        sum_of_square=0;
        for(i=1;i<=num;i++){
            square_of_sum = square_of_sum+pow(i,2);
        }
        sum_of_square = (num*(num+1))/2;
        sum_of_square = pow(sum_of_square,2);
        square_of_sum = sum_of_square-square_of_sum;
        printf("%0.0lf\n",square_of_sum);
    }
}
