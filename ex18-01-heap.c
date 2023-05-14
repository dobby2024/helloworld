/*
파일명: ex18-01-heap.c

힙 영역의 필요성
    예제 처럼 지역변수 사용시 함수를 벗어나면 소멸
    전역변수 사용시 코드가 복잡해지고 관리가 힘들어 질 수 있다.




ex18-01 에서 변수 str이 스택에 있다가 사라지니까 문자를 입력해도 main에서 null로 출력된다고 하신 거 같은데

char 대신에 int로 하고,
숫자 scan 받아서 return하는 함수를 만들어봤는데 

이 경우에는 null로 출력이 안 되고 입력한 숫자를 그대로 반환해주는데 그건 왜 그런가요?
*/
#include <stdio.h>

// 반환 타입이 char 포인터변수
char* getString(void)
{
    char str[100];
    printf("좋아하는 단어는 ?");
    gets(str); // 문자열 입력함수 

    return str;
}

int main(void)
{
    char* result = getString();

    printf("당신이 좋아하는 단어는: %s\n", result);

    return 0;
}
