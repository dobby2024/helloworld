/*
ex05-02-operator2.c

4. 논리 연산자
    && (AND): 피연산자가 모두 참이면 참
    || (OR): 피연산자 중 참이 있으면 참
    ! (NOT): 피연산자가 참이면 거짓, 거짓이면 참(반전)

5. 삼항 조건 연산자
    조건 ? 참일 경우 결과 : 거짓일 경우 결과

6. 비트 단위 연산자
    & : 대응이 되는 비트가 모두 1이면 1반환 (비트 AND 연산자)
    | : 대응이 되는 비트 중에서 하나라도 1이면 1반환 (비트 OR 연산자)
    ^ : 대응이 되는 비트가 서로 다르면 1반환 (비트 XOR 연산자)
    ~ : 비트가 1이면 0으로, 0이면 1로 반전시킴 (비트 NOT 연산자)

7. 시프트 연산자
    << : 지정한 수만큼 비트들을 전부 왼쪽으로 이동시킴 (left shift 연산자)
    >> : 부호를 유지하면서 지정한 수만큼 비트를 전부 오른쪽으로 이동시킴 (right shift 연산자)

8. 증감연산자
    ++ : 변수의 값을 1 증가시킨다.
    -- : 변수의 값을 1 감소 시킨다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 논리 연산자
    printf("논리 연산자\n");
    int num1 = 20, num2 = 10;
    int result;
    result = 1 && 1;
    printf("1) result: %d\n", result);

    result = num1 == 20 && num2 == 10;
    printf("2) result: %d\n", result);

    result = num1 > num2 || num1 == num2;
    printf("3) result: %d\n", result);

    printf("\n");

    // 비트 연산자
    printf("비트 연산자 \n");
    int a = 3;  // 0011
    int b = 5;  // 0101
                // ~0 0011 -> 1 1100
                // 


    printf("3 & 5 = %d\n", a & b);
    printf("3 | 5 = %d\n", a | b);
    printf("3 ^ 5 = %d\n", a ^ b);
    printf("~3 = %d\n", ~a);

    printf("\n");

    // 쉬프트 연산자
    int x, y;
    x = 3;  // 0011 >> 2 = 0000
    y = x << 2; // 왼쪽으로 두 칸 이동
    printf("%d << 2 = %d\n", x, y);
    y = x >> 2; // 오른쪽으로 두 칸 이동
    printf("%d >> 2 = %d\n", x, y);
    printf("\n");

    // 증감 연산자
    // 전위 증감연산자
    int i = 1;  
    printf("1)전위 증감연산자: %d\n", ++i);   
    printf("2)전위 증감연산자: %d\n", i);   

    // 후위 증감연산자
    int j = 1;
    printf("1)후위 증감연산자: %d\n", j++);
    printf("2)후위 증감연산자: %d\n", j);

    // 삼항 연산자
    printf("삼항 연산자 \n");
    int num, absolute;

    printf("정수 입력: ");
    scanf("%d", &num);

    absolute = num > 0 ? num : num * -1;
    printf("절대값: %d\n", absolute);

    if (num > 0) 
        absolute = num;
    else
        absolute = num * -1;

    printf("절대값: %d\n", absolute);
    

    printf("\n");

    return 0;

}



