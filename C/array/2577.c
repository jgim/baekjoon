#include <stdio.h>

/* 세  개의 자연수 A, B, C가 주어질 때 */
/* A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성 */

int main()
{
	int a;
	int b;
	int c;
	int i;
	int sum;
	int arr[10];

	scanf("%d %d %d", &a, &b, &c);
	if (a < 100 || a > 999 || \
		b < 100 || b > 999 || \
		c < 100 || c > 999)
		return (0);
	sum = a * b * c;
	for (i = 0; i < 10; i++)
		arr[i] = 0;
	while (sum)
	{
		arr[sum % 10] += 1;
		sum /= 10;
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return (0);
}
