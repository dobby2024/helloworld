/*
파일명: ex16-06-recursive-function2.c
*/

#include <stdio.h>

/*
sayHello(1) 
    count = 1;
    printf("Hello!\n");
        ->sayHello(2) 
            count = 2;
            printf("Hello!\n");
                ->sayHello(3) 
                    count = 3;
                    printf("Hello!\n");
*/


// count는 종료 조건을 위한 매개변수
int sayHello(int count)
{
    printf("Hello!\n");

    // count가 3이 되면 더이상 재귀호출을 하지 않는다.
    if (count != 3) {
        sayHello(count + 1);
    }
}

int main(void)
{
    // 재귀함수 호출
    sayHello(1);

    return 0;
}
