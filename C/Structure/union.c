#include <stdio.h>

union Student
{
    int rollNo;
    char name[50];
    float marks;
};

void main()
{
    union Student data;

    printf("\nEnter the Roll No :");
    scanf("%d", &data.rollNo);
    printf("\n Your Roll No is : %d", data.rollNo);

    printf("\nEnter the Name :");
    scanf("%s", data.name);
    printf("\n Your Name is : %s", data.name);

    printf("\nEnter the Marks :");
    scanf("%f", &data.marks);
    printf("\n Your Marks is : %.2f", data.marks);
}
