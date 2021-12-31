#include <stdio.h>

int main()
{
	int i;
	int sum;
	char c;

	sum = 0;
	for (i = 0;; i++)
	{
		scanf("%c", &c);
		if (c == '\n')
			break;
		if (c >= 87)
			sum += 10;
		else if (c >= 84)
			sum += 9;
		else if (c >= 80)
			sum += 8;
		else if (c >= 77)
			sum += 7;
		else if (c >= 74)
			sum += 6;
		else if (c >= 71)
			sum += 5;
		else if (c >= 68)
			sum += 4;
		else if (c >= 65)
			sum += 3;
	}
	if (i < 2 || i > 15)
		return (0);
	printf("%d", sum);
	return (0);
}
