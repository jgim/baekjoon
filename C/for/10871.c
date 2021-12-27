#include <stdio.h>

/* 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램 */

int main()
{
	int n;
	int x;
	int i;
	int a;

	scanf("%d %d", &n, &x);
	if (n < 1 || n > 10000)
		return (0);
	if (x < 1 || x > 10000)
		return (0);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < x)
			printf("%d ", a);
	}
	return (0);
}
