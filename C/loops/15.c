#include <stdio.h>

int main()
{
    int num, digit, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    
    printf("Number in words: ");

    while (rev > 0)
    {
        digit = rev % 10;

        if (digit == 0)
            printf("zero ");
        else if (digit == 1)
            printf("one ");
        else if (digit == 2)
            printf("two ");
        else if (digit == 3)
            printf("three ");
        else if (digit == 4)
            printf("four ");
        else if (digit == 5)
            printf("five ");
        else if (digit == 6)
            printf("six ");
        else if (digit == 7)
            printf("seven ");
        else if (digit == 8)
            printf("eight ");
        else if (digit == 9)
            printf("nine ");

            rev /= 10;
    }

    return 0;
}
