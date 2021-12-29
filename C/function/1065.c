#include <stdio.h>

/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
*/

// int sequence(int n)
// {
// 	int tmp;
// 	int diff;
// 	int flag;

// 	tmp = 0;
// 	flag = 0;
// 	if (n < 100)
// 		return (1);
// 	while (n)
// 	{
// 		tmp = n % 10;
// 		n /= 10;
// 		if ((n % 10) - tmp != diff && flag)
// 			return (0);
// 		if (n < 10)
// 			break;
// 		diff = (n % 10) - tmp;
// 		flag = 1;
// 	}
// 	return (1);
// }

// int main()
// {
// 	int i;
// 	int n;
// 	int sum;

// 	scanf("%d", &n);
// 	if (n < 1 || n > 1000)
// 		return (0);
// 	sum = 0;
// 	for (i = 1; i <= n; i++)
// 	{
// 		sum += sequence(i);
// 	}
// 	printf("%d", sum);
// }

int sequence(int n)
{
	if (n < 100)
		return (1);
	if (n == 1000)
		return (0);
	if ((n / 100) - (n / 10 % 10) != (n / 10 % 10) - (n % 10))
		return (0);
	return (1);
}

int main()
{
	int i;
	int n;
	int sum;

	scanf("%d", &n);
	if (n < 1 || n > 1000)
		return (0);
	sum = 0;
	for (i = 1; i <= n; i++)
		sum += sequence(i);
	printf("%d", sum);
	return (0);
}
