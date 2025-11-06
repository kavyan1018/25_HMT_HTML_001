// 5. check character is alphabet , number or special character ?

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Enter any character is alphabet , number or special character :");
    scanf("%c", &ch);


    // user input check alpha, num, spc?

    if (ch >= 'a' && ch <= 'z')
    {
        printf("\n This is Alphabet !");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\n This is a Number !");
    }
    else
    {
        printf("\nThis is a Special Char !");
    }
}