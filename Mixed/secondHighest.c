#include<stdio.h>
void main(){
    int i,n,max,min,secondmax,secondmin;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter your array:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("\n Inputed array:");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    max = a[0];
    min = a[0];
    secondmax=a[0];

    for(i=0;i<n;i++)
    {
      if(max<a[i])
        max=a[i];
      else if(a[i]<min)
        min=a[i];
    }
    printf("\nmax=%d",max);
    printf("\nmin=%d",min);
     secondmin = a[1];
     for(i=0;i<n;i++)
    {
        if(a[i]!=max){
      if(a[i]>secondmax){
        {
            secondmax=a[i];
        }
      }
    }
      else if(a[i]>min){
             if(secondmin<a[i])
                secondmin=a[i];
      }
    }
    printf("\nsecondmax=%d",secondmax);
    printf("\n secondmin=%d",secondmin);
}
