#include <stdio.h>
unsigned int lcm(int n1,int n2)
{
    unsigned int minMultiple;
    minMultiple = (n1>n2) ? n1 : n2;

    // Always true
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            return minMultiple;
            break;
        }
        ++minMultiple;
    }
    return 0;
}
int main(){
    int iteration,range,i;
    unsigned int value;
    scanf("%d",&iteration);
    while(iteration--){
        scanf("%d",&range);
            value=1;
        for(i=2;i<=range;i++){
          value = lcm(value,i);
        }
        printf("%u\n",value);
    }
    return 0;

}
