/*
C언어 메모리 구조

코드(Code) 영역
    프로그램 코드 저장하는 메모리 공간
데이터(Data) 영역
    변수를 위해 할당되는 공간.
    프로그램 시작과 동시에 메모리 공간에 할당되는
    종료할 때까지 사용가능한 상태를 유지하는 특징이 있다.
    전역변수와 static변수
스택(Stack) 영역
    함수내에서만 유효한 데이터 저장
    지역변수와 인자로 전달된 변수
힙(Heap) 영역
    사용자가 원하는 시점에 메모리 공간 할당하고
    원하는 시점에 소멸시킬 수 있는 변수 저장
*/
#include <stdio.h>

// 데이터 영역
int outer = 10;     // 전역변수

int main(void)
{
    // 스택영역
    int inner = 3;  // 지역변수
    inner++;
    printf("inner: %d\n", inner);
    inner++;
    printf("outer: %d\n", outer);

    return 0;
}

