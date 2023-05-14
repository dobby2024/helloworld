/*
파일명: ex20-06-structure-call-by-reference.c

구조체 Call by reference
*/
#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
}Point;

void setPosSameValue(Point* ptr)
{
    printf("ptr 주소값 : %p\n", &ptr);

    if ((*ptr).xpos > ptr->ypos)
    {
        ptr->ypos = ptr->xpos;
    }
    else
    {
        ptr->xpos = ptr->ypos;
    }
}

void printPoint(Point point)
{
    printf("x : %d, y : %d\n", point.xpos, point.ypos);
}

int main(void)
{
    Point position1 = {66, 66};
    Point position2 = {6, 3};

    printf("main position1 : %p\n", &position1);
	printf("main position2 : %p\n", &position2);

    // 주소 값을 전달!
    setPosSameValue(&position1);
    setPosSameValue(&position2);

    // 각 포인트를 출력
    printPoint(position1);
    printPoint(position2);
    
    return 0;
}