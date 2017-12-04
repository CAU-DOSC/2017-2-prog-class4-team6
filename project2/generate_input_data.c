#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


char* genrate_input_data(char *str, int *pn, int *pd)
{
	srand((unsigned)time(NULL));
	scanf("%d", pn); //문자열 길이 설정
	*pd = rand() % (*pn) + 1;
	if (rand() % 2)
		(*pd) *= -1;

	str = malloc(sizeof(char) * (*pn));
	for (int i = 0; i < (*pn); i++)
		str[i] = (rand() % 26) + 65;

	return str;
}
