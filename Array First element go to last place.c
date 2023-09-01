
#include <stdio.h>

int main()
{
int a[12] = { 4, 6, 6, 4, 7, 8, 10, 7, 8, 10, 4, 9};
int i, t;
t = a[0];
for(i=0; i < 12-1; i++)
a[i] = a[i+1];
a[12-1] = t;
printf(" Array elements after left rotation……..\n");
for(i = 0; i < 12; i++)
printf("%d\n", a[i]);
}
