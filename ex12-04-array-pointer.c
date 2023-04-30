/*
파일명: ex12-04-array-pointer.c

배열 포인터
*/

#include <stdio.h>

int main(void)
{
    // 2개의 행과 3개의 열로 이루어진 2차원 배열
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // 열이 3개인 2차원 배열의 포인터
    int (*arrptr)[3] = arr;

    printf("%p\n", arr);

    int arr1d[2] = { 1, 2 };
    int* arrptr1d = arr1d;
    printf("%p\n", arr1d);
    printf("%p\n", arrptr1d);

    printf("%d\n", arrptr1d[0]);


    
    // int i, j;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d ", arrptr[i][j]);
    //     }
    //     printf("\n");
    // }

    // // 3차원 배열 선언과 동시에 초기화
    // int arr3d[2][3][4] = {
    //     {
    //         {1,2,3,4},
    //         {5,6,7,8},
    //         {9,10,11,12}
    //     },
    //     {
    //         {21,22,23,24},
    //         {25,26,27,28},
    //         {29,30,31,32}
    //     }
    // };

    // int (*arrptr3d)[3][4] = arr3d;

    // // 3차 배열 전체 출력
    // int x, y, k;
    // for (x = 0; x < 2; x++)
    // {
    //     for (y = 0; y < 3; y++)
    //     {
    //         for (k = 0; k < 4; k++)
    //         {
    //             printf("%d ", arrptr3d[x][y][k]);
    //         }
    //         printf("\n");
    //     }
    //     printf("\n");
    // }

    return 0;
}