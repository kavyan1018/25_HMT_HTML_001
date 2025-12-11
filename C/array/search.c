#include<stdio.h>
#include<conio.h>


void main()
{
    int a[10], b;
    int i, no, flag = 0;

    printf("Enter the Number u want add in array :");
    scanf("%d", &b);

    printf("Enter the %d Numbers :", b);

    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the Number u want  to search :");
    scanf("%d", &no);

    for (i = 0; i < b; i++)
    {
        // comper if

        if (a[i] == no)
        {
            printf("\nThe Number is Found %d at position %d", a[i], i+1); // 0 + 1
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }
    }
    
    if (flag == 1)
    {
        printf("The NUmber is not Found !");
    }
}