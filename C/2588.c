#include <stdio.h>

/* 사칙연산과 나머지를 출력 */

// int main(void)
// {
// 	int a;
// 	int b;
// 	int c;
// 	int d;

// 	scanf("%d %d", &a, &b);
// 	c = b % 10;
// 	printf("%d\n", a * c);
// 	d = b / 10;
// 	c = d % 10;
// 	printf("%d\n", a * c);
// 	d /= 10;
// 	printf("%d\n", a * d);
// 	printf("%d", a * b);
// 	return (0);
// }

int main(void)
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * (b / 10 % 10));
	printf("%d\n", a * (b / 100));
	printf("%d", a * b);
	return (0);
}
