#include <stdio.h>

/* 세  개의 자연수 A, B, C가 주어질 때 */
/* A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성 */

int main()
{
	int i;
	int j;
	int arr[10];
	int remainder[42];

	for (i = 0; i < 42; i++)
		remainder[i] = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < 0 || arr[i] > 1000)
			return (0);
		remainder[arr[i] % 42] += 1;
	}
	j = 0;
	for (i = 0; i < 42; i++)
		if (remainder[i] != 0)
			j++;
	printf("%d\n", j);
	return (0);
}
