// C Program to Implement Insertion Sort
#include <stdio.h>
#define MAX 7

void insertion_sort(int *);

void main()

{

    int a[MAX], i;
    printf("enter %d elements to be sorted:",MAX);

    for (i = 0;i < MAX;i++){

        scanf("%d", &a[i]);
    }

    insertion_sort(a);

    printf("sorted elements:\n");

    for (i = 0;i < MAX; i++){

        printf(" %d", a[i]);
    }

}
void insertion_sort(int * x){

    int temp, i, j;

    for (i = 1;i < MAX;i++)

    {

        temp = x[i];

        j = i - 1;

        while (temp < x[j] && j >= 0){

            x[j + 1] = x[j];

            j = j - 1;

        }

        x[j + 1] = temp;
    }
}
