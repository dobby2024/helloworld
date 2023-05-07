/*
파일명: ex17-02-double-pointer-swap.c
*/
#include <stdio.h>

void swapNumber(int **dptr1, int **dptr2) 
{
    int* temp = *dptr1;
    *dptr1 = *dptr2;
    *dptr2 = temp;

    printf("&num1 : %p\n", &(**dptr1));
    printf("&num2 : %p\n", &(**dptr2));
    printf("&ptr1 : %p\n", &(*dptr1));
    printf("&ptr2 : %p\n", &(*dptr2));
    printf("&dptr1 : %p\n", &dptr1);
    printf("&dptr2 : %p\n", &dptr2);
    printf("&temp : %p\n", &temp);

}

int main(void)
{
    int num1 = 66, num2 = 99;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    
    printf("*ptr1 : %d *ptr2 : %d\n", *ptr1, *ptr2);
    swapNumber(&ptr1, &ptr2);
    printf("*ptr1 : %d *ptr2 : %d\n", *ptr1, *ptr2);

    printf("num1 : %d num2 : %d\n", num1, num2);

    return 0;

}

