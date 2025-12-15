#include<stdio.h>   // printf and scanf
#include<conio.h>  // clrscr and getch
#include<string.h> // string functions 

void main()
{
    char a[10], c[10], d[10];
    int b;

    // printf
    puts("Enter the Name :");
    // scanf
    gets(a);

    // puts("Enter the Last Name :");
    // gets(b);


    // b = strlen(a);

    // strcpy(c, a);

    // strcat(a , b);

    strrev(a);

    printf("\nYour Name is Before Copy : %s", a);
}