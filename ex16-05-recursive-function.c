/*
파일명: ex16-05-recursive-function.c

재귀함수
    자기 자신을 호출하는 함수
    반복문 동일한 역할

    장점 : 변수 선언 줄어듬 / 가독성 좋을 수 있음
    단점 : 스택메모리 오버플로우 발생 / 경우에 따라서 찾기 힘듬!
*/
#include <stdio.h>

void sayHello()
{
    printf("Hello!\n");
    sayHello(); // 자기 자신을 다시 호출 -> 반복문 비슷
}

int main(void)
{
    // 재귀함수 호출
    sayHello();
    return 0;
}
