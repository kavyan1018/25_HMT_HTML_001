#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][3] = {
        {10, 20, 30} , 
        {40, 50, 60}
    };

    int *p[3];

    printf("\n Accessing the element one by one");

    // p + 0  --> still points to row 0
    // +0 --> column

    // printf("\n a[0][0] = %d", *(p + row) + column);
    printf("\n a[0][0] = %d", *(p + 0) + 0);
    printf("\n a[0][0] = %d", *(*(p + 0) + 0));

}