#include<stdio.h>

void main()
{
    int even[50],odd[50], i;
    int e = 0, o = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            even[e] = i;
            e++;
        }
        else
        {
            odd[o] = i;
            o++;
        }
    }
    
    // print even
    printf("\n Even Numbers are :");
    for (i = 1; i <= e; i++)
    {
        printf("%d ", even[i]);
    }
    
    // print odd
    printf("\n Odd Numbers are :");
    for (i = 1; i <= o; i++)
    {
        printf("%d ", odd[i]);
    }
}

// user inout -  10 20 30 40 50

// 50 40 30 20 10