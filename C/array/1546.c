#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	int max;
	int *arr;
	double sum;

	sum = 0;
	max = 0;
	scanf("%d", &n);
	if (n < 1 || n > 1000)
		return (0);
	arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < 0 || arr[i] > 100)
		{
			free(arr);
			return (0);
		}
		if (arr[i] > max)
			max = arr[i];
		sum += arr[i];
	}
	printf("%lf", sum / n / max * 100);
	free(arr);
	return (0);
}
