#include <stdio.h>

/* 사칙연산과 나머지를 출력 */

int main(void)
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d", a % b);
	return (0);
}
