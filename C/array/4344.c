#include <stdio.h>
#include <stdlib.h>


/* 첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고,
이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다. */

int main()
{
	int n;
	int i;
	int j;
	int num;
	int *arr;
	double k;
	double sum;


	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d", &num);
		if (num < 1 || num > 1000)
			return (0);
		arr = malloc(sizeof(int) * (num + 1));
		arr[0] = num;
	 	for (j = 1; j <= num; j++)
		{
			scanf("%d", &arr[j]);
			if (arr[j] < 0 || arr[j] > 100)
			{
				free(arr);
				return (0);
			}
			sum += arr[j];
		}
		k = 0;
		for (j = 1; j <= num; j++)
		{
			if (arr[j] > sum / num)
				k++;
		}
		printf("%.3lf%%\n", k/num * 100);
		free(arr);
	}
	return (0);
}
