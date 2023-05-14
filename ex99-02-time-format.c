/*
ex99-02-time-format.c

strftiem 함수
    시간을 지정항 형식 문자열로 변환

*/
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t rawtime;
    struct tm *info; 
    char buffer[80];

    // 현재시간을 time_t 타입으로 반환, rawtime 메모리의 저장
    time(&rawtime);

    // 반환된 시간은 현재 시스템의 로컬시간으로 변환
    info = localtime(&rawtime);

    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", info);

    printf("Formatted time is : %s", buffer);

    return 0;
}
