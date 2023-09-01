#include <stdio.h>
int main()
{
    int a[8] = {12,13,34,35,56,645,32,9};
    int i , min;
    min = a[0];
    for(i = 1; i < 8; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
        printf("The minimum value is : %d\n", min);

}
