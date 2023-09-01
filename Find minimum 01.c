#include <stdio.h>
#include <stdlib.h>
#define N 12
int main()
{
int a[N] = { 14, 21, 36, 14, 12, 9, 8, 22, 7, 81, 77, 10};
int i;
// Find The Minimum Element
int min=a[0]; // pick the first number as the current minimum
for(i=1; i< N; i++)
{
if(a[i] < min)
{
min=a[i];
}
}
printf("The minumum value in the array is %d.\n\n", min);
}
