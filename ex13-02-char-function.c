/*
파일명: ex13-02-char-function.c

char 관련 함수
    getchar()
        문자 입력 함수
    putchar()
        문자 출력 함수
*/

#include <stdio.h>

int main(void)
{
    char ch = getchar(); // 표준 입력에서 1개의 문자(char) 입력받기
    printf("입력한 문자: %c\n", ch);

    int ch1, ch2, temp;
    ch1 = getchar();
    printf("%d\n", ch1);
    temp = getchar();
    printf("%d\n", temp);
    ch2 = getchar();
    printf("%d\n", ch2);

    putchar(ch1); putchar(ch2);

    return 0;

}
