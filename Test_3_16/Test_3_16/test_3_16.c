#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sz = 0;
	scanf("%d", &sz);
	int *num;
	num = (int*)malloc(sz*sizeof(int));
	for (int i = 0; i < sz; i++)
	{
		num[i] = i;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", num[i]);
	}
	system("pause");
	return 0;
}