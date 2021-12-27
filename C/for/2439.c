#include <stdio.h>

/* 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제 */
/* 오른쪽 정렬 */

int main()
{
	int n;
	int i;
	int j;

	scanf("%d", &n);
	if (n < 1 || n > 100)
		return (0);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return (0);
}
