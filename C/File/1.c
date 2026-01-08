// // Write mode

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     FILE *p;
//     char c;

//     p = fopen("intro.txt", "w");

//     if (p == NULL)
//     {
//         printf("File cannot be opened");
//     }

//     // fprintf(); --> file print function

//     fprintf(p, "Hello World\n");
//     fprintf(p, "This is my first Session of File Handaling !\n");
//     fclose(p);

// }

// read mode

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *p;
    char c;

    p = fopen("intro.txt", "r");

    if (p == NULL)
    {
        printf("File cannot be opened");
    }
    else
    {
        printf("File opened successfully\n");
        
        while ((c = fgetc(p)) != EOF) // eof = end of file
        {
            putchar(c);
        }
    }

    fclose(p);
}