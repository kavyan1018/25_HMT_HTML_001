//             -> No arguments and With return type


#include<stdio.h>
#include<conio.h>
int addfun();
int addfun()
{
    int sum;
    int a, b;

    printf("\n Enter the First Number :");
    scanf("%d", &a);
    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a + b;

    return sum;
}

int main()
{
    int result;

    result = addfun();

    printf("Sum of two Numbers is  : %d ", result);
}