#include <stdio.h>
#include <string.h>

int check_alphanumeric(char c)
{
	if (('0' <= c && c <= '9') \
		|| ('A' <= c && c <= 'Z') \
		|| c == '\\' || c == '$' || c == '%' || c == '*' \
		|| c == '+' || c == '-' || c == '.' || c == '/' || c == ':')
		return (0);
	return (1);
}

int main()
{
	int n;
	int i;
	int j;
	int k;
	int count;
	char str[160] = {};

	scanf("%d", &n);
	if (n < 1 || n > 1000)
		return (0);
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &count);
		if (count < 1 || count > 8)
			return (0);
		scanf ("%s", str);
		if (!str[0] || strlen(str) > 20)
			return (0);
		for (j = 0; j < strlen(str); j++)
		{
			if (check_alphanumeric(str[j]))
				return (0);
			for (k = 0; k < count; k++)
				printf("%c", str[j]);
		}
		printf("\n");
	}
	return (0);
}
