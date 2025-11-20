/*

       1
      12
     123
    1234 
   12345

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n = 5;
    int i, j, k;

    printf("Number Pyramid pattern :\n");

    for (i = 1; i <= n; i++)
    {
        // 1. Loop to print the space for center align

        for (k = 1 ; k <= n - i ; k++)
        {
            printf(" ");
        }
        
        for ( j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }
}