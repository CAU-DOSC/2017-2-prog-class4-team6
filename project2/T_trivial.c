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