#include <stdio.h>
#include <ctype.h>

// #include <string.h>

// int main()
// {
// 	int i;
// 	int len;
// 	int max;
// 	int high;
// 	int arr[26] = {};
// 	char str[1000000] = {};

// 	scanf("%s", str);
// 	len = strlen(str);
// 	if (len > 1000000 || len < 1)
// 		return (0);
// 	for (i = 0; i < len; i++)
// 	{
// 		if ('a' <= str[i] && str[i] <= 'z')
// 			arr[str[i] - 'a'] += 1;
// 		else if ('A' <= str[i] && str[i] <= 'Z')
// 			arr[str[i] - 'A'] += 1;
// 		else
// 			return (0);
// 	}
// 	len = 0;
// 	high = 0;
// 	for (i = 0; i < 26; i++)
// 	{
// 		if (arr[i] > high)
// 		{
// 			high = arr[i];
// 			len = i;
// 		}
// 		else if (arr[i] == high)
// 			len = 26;
// 	}
// 	len == 26 ? printf ("?") : printf("%c", 'A' + len);
// }

// int main()
// {
// 	int i;
// 	int high;
// 	char c;
// 	int arr[26] = {};

// 	for (i = 0;; i++)
// 	{
// 		scanf("%c", &c);
// 		if ('a' <= c && c <= 'z')
// 			arr[c - 'a'] += 1;
// 		else if ('A' <= c && c <= 'Z')
// 			arr[c - 'A'] += 1;
// 		else if (c == '\n')
// 			break;
// 		else
// 			return (0);
// 	}
// 	if (i > 1000000 || i < 1)
// 		return (0);
// 	i = 0;
// 	high = 0;
// 	for (i = 0; i < 26; i++)
// 	{
// 		if (arr[i] > high)
// 		{
// 			high = arr[i];
// 			c = 'A' + i;
// 		}
// 		else if (arr[i] == high)
// 			c = '?';
// 	}
// 	printf("%c", c);
// }

int main()
{
	int i;
	int high;
	char c;
	int arr[26] = {};

	for (i = 0;; i++)
	{
		scanf("%c", &c);
		arr[toupper(c) - 'A']++;
		if (c == '\n')
			break;
	}
	if (i > 1000000 || i < 1)
		return (0);
	i = 0;
	high = 0;
	for (i = 0; i < 26; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
			c = 'A' + i;
		}
		else if (arr[i] == high)
			c = '?';
	}
	printf("%c", c);
}
