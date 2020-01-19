#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int sum = 7;
//	int num = 7;
//	sum = num++; sum++; ++num;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 10, j = 10, k = 3;
//	k *= i + j;
//	printf("k=%d\n", k);
//	return 0;
//}

//void ToLowerCase(char* str)
//{
//	while (*str!='\0')
//	{
//		*str += 32;
//		str++;
//	}
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	scanf("%s", &str);
//	printf("\n");
//	ToLowerCase(str);
//	printf("%s", str);
//	printf("\n");
//	return 0;
//}

void rotate(int* a, int sz , int k)
{
	int tmp = 0;
	int i = k;
	while (i > 0)
	{
		tmp = *a;
		*a = *(a + k);
		*(a + k) = tmp;
		i-- ;
	}
}

int main()
{
	int a[5] = { 0 };
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 0;
	int i = 0;
	printf("输入五个数字：> \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	while (k <= 0)
	{
		printf("请输入K ：>  ");
		scanf("%d", &k);
	}
	rotate(a, sz, k);
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}