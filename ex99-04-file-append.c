/*
파일명: ex99-04-file-append.c
*/

#include <stdio.h>

int main(void) 
{
    FILE *file;

    // 파일열기 (기존 내용 유지)
    file = fopen("example.txt", "a");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다");
        return 1;
    }

    // 파일에 내용 추가
    fprintf(file, "추가된 내용입니다.\n");
    fclose(file);

    // 파일읽기
    char buffer[256];
    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}