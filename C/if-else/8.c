// 7. Find first and last digit of number;  ex. 159643 -> first=1  , last=3

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, first, last;

    printf("\n Enter the Number :");
    scanf("%d",&num);

    last = num % 10;


    for (first = num ; first >= 10; first = first / 10)
    {
        
    }
    
    printf("\n First Digit is : %d", first);
    printf("\nLast Digit is : %d ",last);

}