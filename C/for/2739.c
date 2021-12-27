#include <stdio.h>

/* n단의 구구단을 출력 */

/* short */

// int main(int n)
// {
// 	scanf("%d", &n); for (int i = 1; i < 10; i++) printf("%d * %d = %d\n", n, i, n * i);
// }

int main()
{
	int n;

	scanf("%d", &n);
	if (n < 1 || n > 9)
		return (0);
	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", n, i, n * i);
	return (0);
}
