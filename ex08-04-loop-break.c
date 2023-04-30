/*
파일명: ex08-04-loop-break.c

break 문
    반복문에서 break문은 반복문을 즉시 종료하는 명령어!

VSCODE 자동정렬 단축키 
    Ctrl + A 전체선택후 -> Ctrl + K + F
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;
    while (1)
    {
        printf("-1 입력시 종료: ");
        scanf("%d", &num);
        if (num == -1)
            break;
    }

    printf("main 종료\n");

    return 0;
}
