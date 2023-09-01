#include <stdio.h>
int main()
{
    int n = 5;// n;
    int array[5];
    int i, sum, avg;
    sum = 0;
    printf("Enter the markes %d students :\n\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the mark  of %d student :", i+1);
        scanf("%d", &array[i]);
        sum = sum + array[i];
        avg = sum / n;

    }
   printf(" Average = %d \t", avg);
    printf(" sum = %d  \t", sum);



}
