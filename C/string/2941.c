#include <stdio.h>

int main()
{
	int i;
	int sum;
	char c;
	char temp;

	sum = 0;
	temp = 0;
	for (i = 0; ;i++)
	{
		scanf("%c", &c);
		if (c == '=' || c == '-' ||
		(temp == 'l' || temp == 'n') && c == 'j' ||
		temp == 'd' && c == 'z')
		{
			if (temp == 'd' && c == 'z')
				temp = 'z';
			else
				temp = 0;
			continue;
		}
		if (temp == 'z' && c != '=')
			sum++;
		if (c == '\n')
			break;
		if (c == 'l' || c == 'n' || c == 'd')
			temp = c;
		else
			temp = 0;
		sum++;
	}
	printf("%d", sum);
	return (0);
}
