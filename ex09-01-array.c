/*
파일명: ex09-01-array.c

배열
    다수의 데이터를 저장하고 처리하기 위해 사용하는 데이터 표현 방법.
    여러 개의 데이터를 하나의 묶음으로 관리할 수 있는 데이터 구조.
    변수 갯수를 줄일 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 길이 정보가 포함된 배열 선언 및 초기화
    int numbers[3] = {1, 2, 3};

    // 길이 정보가 포함되지 않은 배열의 선언 및 초기화
    char characters[] = { 'a', 'b', 'c', 'd', 'e'};

    int odd[3]; // 초기화 되지 않은 배열

    // 배열의 개별 요소 초기화
    odd[0] = 1;
    odd[1] = 3;
    odd[2] = 5;

    // 개별 요소 접근 및 출력
    printf("%d %d %d\n", odd[0], odd[1], odd[2]);

    int i;
    // for문을 통한 배열 요소 출력
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", odd[i]);
    }

    /*
    문자 개수보다 한개 더 많은 13출력
    이는 오류아닌 마지막에 '\0' 이라는 문자를 삽입하기 떄문이다.
    '\0' 문자를 가르켜 '널(Null) 문자' 라고 한다.
    */
    char greet[] = "Hello, Guys!";
    printf("1차원 배열 greet의 길이는: %d\n", sizeof(greet));

    char mind[30] = "I Love Programming!";
    printf("%s\n", mind);

    mind[7] = '\0'; // 8번째 요소로 null 문자 삽입
    printf("%s\n", mind);

    printf("sizeof: %d\n", sizeof(mind));

    mind[1] = '\0'; // 2번째 요소로 null 문자 삽입
    printf("%s\n", mind);

    char str[50];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    printf("입력된 문자열: %s\n", str);

    return 0;

}
