#include <stdio.h>

/* 입력 받은 값 a에서 b를 곱한 값을 출력 */

int main(void)
{
	double a;
	double b;

	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a / b);
	return (0);
}

/* 소수점 9자리까지 출력이 핵심 */
