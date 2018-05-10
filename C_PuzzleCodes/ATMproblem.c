 #include<stdio.h>
int main(){
   int x;
   float y;

   scanf("%d",&x);
   scanf("%f",&y);
   if(x>y){
        printf("%0.2f",y);
    return 0;
   }
   else if(x<y-0.50){
       if(x%5==0){
            y -=x;
            y -=0.50;
       }
       printf("%0.2f",y);
   }
   else
     printf("%0.2f",y);
   return 0;

}
