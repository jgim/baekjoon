#include <stdio.h>
#include <string.h>

/* "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오. */

int main()
{
	int n;
	int i;
	int j;
	int sum;
	int count;
	char arr[80];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		j = 0;
		sum = 0;
		count = 1;
		scanf("%s", arr);
		for (j = 0; j < strlen(arr); j++)
		{
			if (arr[j] != 'O' && arr[j] != 'X' || \
				strlen(arr) > 79 || strlen(arr) < 1)
				return (0);
			if (arr[j] == 'O')
				sum += count++;
			else
				count = 1;
		}
		printf("%d\n", sum);
	}
}
