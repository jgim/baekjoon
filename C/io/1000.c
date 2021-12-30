#include <stdio.h>
// #include <stdlib.h>

// int main(int argc ,char *argv[])
// {
// 	if (!argv[1] || !argv[2])
// 		return (0);
// 	printf("%d", atoi(argv[1]) + atoi(argv[2]));
// }

/* 입력 받은 값 a,b를 더한 값을 출력 */

int main(void)
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	printf("%d", a + b);
	return (0);
}
