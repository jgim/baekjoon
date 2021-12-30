#include <stdio.h>

/* N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오. */

int main()
{
	int n;
	int i;
	int sum;
	char str[100];

	sum = 0;
	scanf("%d", &n);
	if (n < 1 || n > 100)
		return (0);
	scanf("%s", str);
	for (i = 0; i < n; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		sum += str[i] - '0';
	}
	printf("%d", sum);
	return (0);
}
