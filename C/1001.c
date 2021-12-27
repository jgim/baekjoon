#include <stdio.h>

/* 입력 받은 값 a에서 b를 뺀 값을 출력 */

int main(void)
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	printf("%d", a - b);
	return (0);
}
