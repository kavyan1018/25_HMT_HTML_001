#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 10;
    int *s;


    s = &a;


    printf("\nvalue of a = %d", a);
    printf("\nAdddress of a = %d", &a);
    printf("\nValue of s = %d", s);
    printf("\nValue Using s = %d", *s);
}