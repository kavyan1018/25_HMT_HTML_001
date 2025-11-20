// #include<stdio.h>

// void main()
// {
//     int arr[5] = {2, 3, 5, 12, 16};

//     printf("%d", arr[3]);
    
//     printf(" %d", arr[4]);
    
//     printf(" %d", arr[0]);

// }


#include<stdio.h>

void main()
{
    int arr[5] = {2, 3, 5, 12, 16};

    printf("Array Elements are :\n");
    for (int i = 0; i < 5; i++) // 0[2] , 1[3] 2[5] 3[12] 4[16] 
    {
        printf("\n %d", arr[i]);
    }
}

// take input from user and display here 