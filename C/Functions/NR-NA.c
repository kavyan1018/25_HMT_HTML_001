#include <stdio.h>
#include <conio.h>

void addfun();
void subfun();
void mulfun();
void divfun();
void modfun();
void main()
{
    // // clrscr();
    // addfun();
    // // getch();

    int choice;

    printf("\n1..Addition..");
    printf("\n2..Subtraction..");
    printf("\n3..Multiplication..");
    printf("\n4..Division..");
    printf("\n5..Modulus..");

    printf("\n Enter Your Choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addfun();
        break;

    case 2:
        subfun();
        break;

    case 3:
        mulfun();
        break;

    case 4:
        divfun();
        break;
    
    case 5:
        modfun();
        break;

    default:
        printf("\n Invalid Choice !");
        break;
    }
}

void addfun()
{
    int a, b, sum = 0;

    printf("\n Enter the First Number :");
    scanf("%d", &a);

    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a + b;

    printf("\n Addition of Two Numbers is : %d", sum);
}

void subfun()
{
    int a, b, sum = 0;

    printf("\n Enter the First Number :");
    scanf("%d", &a);

    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a - b;

    printf("\n Sum of Two Numbers is : %d", sum);
}

void mulfun()
{
    int a, b, sum = 0;

    printf("\n Enter the First Number :");
    scanf("%d", &a);

    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a * b;

    printf("\n Sum of Two Numbers is : %d", sum);
}

void divfun()
{
    int a, b, sum = 0;

    printf("\n Enter the First Number :");
    scanf("%d", &a);

    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a / b;

    printf("\n Sum of Two Numbers is : %d", sum);
}

void modfun()
{
    int a, b, sum = 0;

    printf("\n Enter the First Number :");
    scanf("%d", &a);

    printf("\n Enter the second Number :");
    scanf("%d", &b);

    sum = a % b;

    printf("\n Sum of Two Numbers is : %d", sum);
}