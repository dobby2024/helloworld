/*
파일명: ex12-03-homework.c
i*7 + j+1
 1  2  3  4  5  6  7
 8  9  10 11 12 13 14
 15 16 17 18 19 20 21
 22 23 24 25 26 27 28
 29 30 31 32 33 34 35
 36 37 38 39 40 41 42
 43 44 45 46 47 48 49

 1. 2중배열선언하고
 2. for 문으로 값을 1~49까지 위모양으로 넣으세요
 3. 아래 모양으로 출력하게 해줘
 
1
2 8
15 9 3
4 10 16 22
29 23 17 11 5
6 12 18 24 30 36
43 37 31 25 19 13 7

8  45[6][2] 39[5][3] 33[4][4] 27[3][5] 21[2][6] 

10 47[6][4] 41[5][5] 35[4][6]

12 49[6][6]

*/

#include <stdio.h>

int main(void) 
{
    int array[7][7];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            array[i][j] = i * 7 + j + 1;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }


    printf("\n");

    for (int i = 0; i < 13; i++)
    {
        if (i < 7)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (i % 2 < 1)
                {
                    printf("%d ", array[i-j][j]);
                }
                else 
                {
                    printf("%d ", array[j][i-j]);
                }
            }
        }
        else 
        { 
            for(int j = 0; j < 13 - i; j++)
            {
                if (i % 2 < 1)
                {
                    printf("%d ", array[6-j][i-6+j]);
                }
                else 
                {
                     printf("%d ", array[i-6+j][6-j]);
                    
                }
            }
        }

        printf("\n");
    }


    return 0;
}