//             -> with arguments and No return type


#include<stdio.h>
#include<conio.h>
void addfun(int a, int b);

void main()
{
    int a, b;

    printf("\n Enter the First Number :");
    scanf("%d", &a);
    printf("\n Enter the second Number :");
    scanf("%d", &b);

    addfun(a, b);
}


void addfun(int a ,int b)
{
    int sum;

    sum = a + b;

    printf("Sum of two Numbers is  : %d ", sum);
}