#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void T_trivial(int n, int d, int length, char str[])
{
	if (d > 0)
	{
		for (int i = 0; i < n ; i++)
		{
			char temp = str[length-1];
			str[i + 1] = str[i];
			str[0] = temp;
		}
	}
	else if (d < 0)
	{
		for (int i = 0; i < n; i++)
		{
			char temp = str[0];
			str[i] = str[i + 1];
			str[length-1] = temp;
		}
	}
}

int main()
{
	int n, d, length = 0;
	char str[100] = { 'a','b','c' };
	scanf("%d %d %d", &n, &d, &length);
	printf("%d %d %d\n", n, d, length);
	T_trivial(n, d, length, str);
	printf("%c", str[0]);
	return 0;
}