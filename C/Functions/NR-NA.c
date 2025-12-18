#include<stdio.h>
#include<conio.h>

void addfun();
void main()
{
    // clrscr();
    addfun();
    // getch();
}


void addfun()
{
    int a, b, sum = 0;
    
    printf("\n Enter the First Number :");
    scanf("%d", &a);    
    
    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a + b;

    printf("\n Addition of Two Numbers is : %d",  sum);

}