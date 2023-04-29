/*
파일명: ex08-03-loop-for.c

3. for 문
    
    for(변수 초기화; 조건식; 증감식)
    {
        반복 실행할 코드
    }


2번
   *
  **
 ***
****
3번
   *
  ***
 *****
*******

4번
0   *
1  ***
2 *****
3*******
4 *****
5  ***
6   *
 
5번
    ★
	*
   ***
  *****
 *******
   | |
   | |  Merry Christmas ~*
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    /*
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("i is %d now\n", i);
    }

    int j = 0;
    while (j < 3) 
    {
        printf("j is %d now\n", j);
        j++;
    }

    */

    int i;
    for (i = 0; i < 7; i++)
    {
        int j;
        for (j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

