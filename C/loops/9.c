#include<stdio.h>
#include<conio.h>

void main()
{
    int num, rev = 0, rem;


    printf("\nEnter the Number :");
    scanf("%d", &num);


    for (; num != 0; num = num / 10)
    {
        rem = num  % 10;    // get the last digit
        rev = rev * 10 + rem;
    }
    
    printf("\nReversed Number :%d", rev);

}