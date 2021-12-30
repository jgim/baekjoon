#include <stdio.h>

/* 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램 */

int main()
{
	int a;
	int b;

	while (scanf("%d %d", &a, &b) != -1)
	{
		if (a < 1 || a > 9)
			return (0);
		if (b < 1 || b > 9)
			return (0);
		printf("%d\n", a + b);
	}
	return (0);
}
