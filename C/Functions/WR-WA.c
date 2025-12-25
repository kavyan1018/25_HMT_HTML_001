//             -> with arguments and With return type


#include<stdio.h>
#include<conio.h>
int addfun(int a, int b);

int main()
{
    int a, b,res;

    printf("\n Enter the First Number :");
    scanf("%d", &a);
    printf("\n Enter the second Number :");
    scanf("%d", &b);

    res = addfun(a, b);

    printf("Sum of two Numbers is  : %d ", res);

}


int addfun(int a ,int b)
{
    int sum;

    sum = a + b;

    return sum;
}