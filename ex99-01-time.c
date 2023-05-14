/*
time.h
    시간 관련 기능을 사용할 때 필요한 함수와 매크로들로 포함하고 있다.
*/
#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    char* c_time_string;

    // 현재 시간 얻어오기
    current_time = time(NULL);

    // 현재 시간을 문자열로 변환
    c_time_string = ctime(&current_time);

    // 변환된 시간을 출력
    printf("Current time is %s", c_time_string);

    return 0;
}