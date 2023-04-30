/*
파일명: ex12-02-array3d.c

3차원 배열
*/
#include <stdio.h>

int main(void)
{
    short sarr[2][3][4];
    int iarr[2][3][4];

    printf("size of sarr: %d\n", sizeof(sarr));
    printf("size of iarr: %d\n", sizeof(iarr));

    // 3차원 배열 선언과 동시에 초기화
    int arr[2][3][4] = {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {21,22,23,24},
            {25,26,27,28},
            {29,30,31,32}
        }
    };

    
    return 0;
}