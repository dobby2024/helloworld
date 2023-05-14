#include <stdio.h>

int getNum(void)
{
	int a;
	printf("좋아하는 숫자는?");
	scanf("%d", &a);

	return a;
}

int main(void)
{
	int result = getNum();

	printf("당신이 좋아하는 단어는: %d\n", result);
	return 0;
}