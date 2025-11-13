#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k, b;
    char a;

    printf("Enter the char u want to print here :");
    scanf("%c", &a);

    printf("Enter the Number u want to print the pattern :");
    scanf("%d", &b);

    for (k = 0; k < b; k++)
    {       
        
        for (i = 0; i < 5; i++) // outer loop
        {
            // inner loop / nested loop
            
            for (j = 0; j < 5; j++)
            {
                printf("%c", a);
            } // end of j loop
            printf("\n");
        }

        printf("\n\n");
    }
}