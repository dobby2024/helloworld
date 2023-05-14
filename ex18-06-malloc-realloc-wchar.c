/*
파일명: ex18-06-malloc-realloc-wchar.c
*/

#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>

#define INITIAL_BUFFER_SIZE 1 // 초기 버퍼 사이즈 1로 정의

int main(void) 
{
    int c;
    int len = 0;
    int buffer_size = INITIAL_BUFFER_SIZE;
    wchar_t* str = (wchar_t*)malloc(buffer_size * sizeof(wchar_t)); // 동적 메모리 할당으로 문자열 
                                                    // 포인터에 메모리 공간 할당
    if(str == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    wprintf(L"Enter a string: "); // 사용자에게 문자열 입력 요청
   
    while ((c = fgetwc(stdin)) != L'\n' && c != WEOF)
    {
        str[len++] = c; // 문자열에 문자 추가

        // 현재 문자열 길이가 버퍼 사이즈와 같다면
        if (len == buffer_size) 
        {
            buffer_size *= 2; // 버퍼 사이즈를 2배로 늘림
            str = realloc(str, buffer_size * sizeof(wchar_t)); // 메모리 재할당으로 버퍼사이즈 늘림

            // 메모리 재할당 실패시 에러 메시지 출력 후 프로그램 종료
            if (str == NULL)
            {
                printf("Memory allocation failed\n");
                return 1;
            }
        }
    }
    
    str[len] = L'\0'; // 문자열 끝에 NULL 문자 추가


    wprintf(L"You entered: %s\n", str); // 사용자가 입력한 문자열 출력

    free(str);  // 동적으로 할당한 메모리 해제

    return 0;
}