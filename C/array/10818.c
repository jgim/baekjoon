#include <stdio.h>


int main()
{
	int n;
	int a;
	int max;
	int min;
	scanf("%d", &n);
	int arr[n];

	if (n < 1 || n > 1000000)
		return (0);
	min = 0;
	while (n--)
	{
		scanf("%d", &a);
		if (min == 0)
		{
			min = a;
			max = a;
		}
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	printf("%d %d", min, max);
	return (0);
}

// int main()
// {
// 	int n;
// 	int a;
// 	int max;
// 	int min;

// 	scanf("%d", &n);
// 	if (n < 1 || n > 1000000)
// 		return (0);
// 	min = 0;
// 	while (n--)
// 	{
// 		scanf("%d", &a);
// 		if (min == 0)
// 		{
// 			min = a;
// 			max = a;
// 		}
// 		if (a > max)
// 			max = a;
// 		if (a < min)
// 			min = a;
// 	}
// 	printf("%d %d", min, max);
// 	return (0);
// }
