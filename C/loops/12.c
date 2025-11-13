// 12. Find lcm of two number. ( 12 , 6 --> lcm=12)

#include <stdio.h>
#include <conio.h>

void main()
{

    int num1, num2, max, lcm, i;

    printf("Enter the First Number :");
    scanf("%d", &num1);

    printf("Enter the Second Number :");
    scanf("%d", &num2);

    // find the max number from 2 number 
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    // loop to find LCM

    for (i = max; ; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }else
        {
            continue;
        }
    }

    printf("LCM of %d and %d is : %d", num1, num2 , lcm);
}