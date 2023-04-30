/*
파일명: ex10-01-pointer.c

포인터
    메모리의 주소값을 의미하며 주소값을 저장하는 변수를 가리켜
    '포인터 변수'라고 한다.

    & 주소연산자 : 변수앞에 붙어서 변수의 메모리 시작 주소값을 구한다.
    * 포인터 : 포인터변수를 선언할 때 사용
    * 간접 참조 연산자 : 선언된 포인터 변수가 가리키는 변수
*/

# include <stdio.h>

int main(void)
{
    // char cnum = 5;
    int inum = 999;
    // double dnum = 3.14;

    // 포인터 *연산자 선언, 참조 &연산자 대입으로 포인터변수 생성.
    // char* cptr = &cnum;
    int* iptr = &inum;
    // double* dptr = &dnum;

    // 포인터 변수의 출력에는 형식문자 %p를 사용할 수 있다.
    // printf("%p\n", cptr);

    // Q. 같은 변수에다가 변수값을 다시 대입해도 주소가 안 바뀌는 거지요?
    printf("%p\n", iptr);
    // printf("%p\n", dptr);
    printf("%p\n", &iptr);


    int num = 10;
    int* pnum;
    pnum = &num;    // 포인터 변수 pnum은 num의 주소를 저장

    printf("%d\n", *pnum);

    printf("1) num의 주소값: %p\n", &num);
    printf("1) pnum의 값: %p\n", pnum);

    num = 14;
    printf("1) num의 주소값: %p\n", &num);
    printf("2) pnum의 값: %p\n", pnum);

    printf("1) num: %d\n", num);
    printf("1) *pnum: %d\n", *pnum);

    *pnum = 20;
    printf("num: %d\n", num);
    (*pnum)++; (*pnum)++;
    printf("2) num: %d\n", num);
    printf("2) *pnum: %d\n", *pnum);

    return 0;
}