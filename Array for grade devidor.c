
#include <stdio.h>
int main()
{
    int n = 5;
    int grade[n];
    int i;
    for(i = 0; i < n; i++ )
    {
        printf("Enter the student %d student marks : ", i+1);
        scanf("%d", &grade[i]);
        if(0 <= i >= 59)
        {
           printf("F\n");
        }
        else if (60 <= i <= 69)
        {
            printf("D\n");
        }
        else if (70 <=  i <= 79)
        {
            printf("C\n");
        }
        else if (80 <=i <= 89)
        {
            printf("B\n");
        }
        else if ( 90 <= i <= 100)
        {
            printf("A\n");
        }
        else
        {
         printf(" Markes not allaw\n");
        }






    }


}
