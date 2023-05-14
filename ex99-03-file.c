/*
파일명 : ex99-03-file.c

fopen 함수
    다양한 모드로 파일 열수 있으며,
    읽기, 쓰기 및 추가 작업을 수행할 수 있다.
*/

#include <stdio.h>

int main(void)
{   
    FILE *file;

    // 파일 쓰기
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    fprintf(file, "안녕하세요, C언어 파일 입출력 예제 입니다.\n");
    fclose(file);

    return 0;
}


