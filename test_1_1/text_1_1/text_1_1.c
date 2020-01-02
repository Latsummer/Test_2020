#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int a[5] = { 1, 3, 5, 7, 9 };
//	int b[5] = { 2, 4, 6, 8, 10 };
//	for (i = 0; i < 5;  i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n\n\n");
//	for (i = 0; i < 5; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//void init(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		a[i] = 0;
//	}
//}
//void print(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n\n");
//}
//
//void reverse(int a[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	print(a,sz);
//	reverse(a, sz);
//	print(a, sz);
//	init(a,sz);
//	print(a, sz);
//	return 0;
//}

#include<stdlib.h>
#include<time.h>

void print(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");
}

void bubble(int a[], int sz)
{
	int i = 0; 
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int a[10] = { 0 };
	int i = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz; i++)
	{
		a[i] = rand()%100;
	}
	print(a, sz);
	bubble(a, sz);
	print(a, sz);
	return 0;


}