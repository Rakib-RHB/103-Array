#include <stdio.h>
#include <stdlib.h>
#define N 12
int main()
{
    int a[N]= { 4, 7, 8, 10, 14, 21, 22, 36, 62, 77, 81, 91};
    int target, i, idx;
    printf("What do you want to search?");
    scanf("%d", &target);
    idx = -1;
    for(i=0; i< N; i++)
    {
        if(a[i] == target)
        {
            idx=i;
            break;
        }
        else if(a[i]>target)
            break; // we can stop here
    }
    if(idx == -1)
        printf("Target not found.\n\n");
    else
        printf("Target found at index: %d. \n\n", idx);
}
