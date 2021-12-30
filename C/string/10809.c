#include <stdio.h>
#include <string.h>

/*
알파벳 소문자로만 이루어진 단어 S가 주어진다.
각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
*/

int main()
{
	int i;
	int len;
	int arr[26];
	char str[100];

	memset(arr, -1, sizeof(int) * 26);
	scanf("%s", str);
	len = strlen(str);
	if (len > 100)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		if (arr[str[i] - 'a'] == -1)
			arr[str[i] - 'a'] = i;
	}
	for (i = 0; i < 26; i++)
		printf("%d ", arr[i]);
	return (0);
}
