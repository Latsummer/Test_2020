#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
//
//int main()
//{
//	int row = 0;//行数
//	int typ = 0;//*
//	int none = 0;//'  '
//	int i = 0;
//	while (1)
//	{
//		printf("ROW = ");
//		scanf("%d", &row);
//		if ((row % 2) == 0)
//			printf("Worng Number!!!\n");
//		else
//			break;
//	}
//	for (i = 0; i < (row + 1) / 2; i++)
//	{
//		for (none = (row - 1) / 2; none > i; none--)
//			printf(" ");
//		for (typ = 0; typ <= 2*i; typ++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < (row - 1) / 2; i++)
//	{
//		for (none = 0; none < (i+1); none++)
//			printf(" ");
//		for (typ = row - 2; typ > 2 * i; typ--)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//int count(int num) //求数字个数
//{
//	int counts = 0;
//	while (num)
//	{
//		num /= 10;
//		counts++;
//	}
//	return counts;
//}
//int main()
//{
//	int i = 0;
//	int one = 0;//单个数字
//	for (i = 0; i <= 100000; i++)
//	{
//
//		int sum = 0;
//		int num = i;
//		int counts = count(num);
//		int j = 1;
//		do
//		{
//			sum += pow((num % 10), counts);
//			num /= 10;
//		} while (num);
//		if (i == sum)
//			printf("%d\n", i);
//	}
//
//	
//	return 0;
//}
int cal(int a)
{
	int i = 0;
	int sum = 0;
	int sn = 0;
	for (i = 0; i < 5; i++)
	{
		sum += a*pow(10, i);
		sn += sum;
	}
	return sn;
}


int main()
{
	int Sn = 0;
	int a = 0;
	scanf("%d", &a);
	if (a >= 0 && a < 10)
		Sn = cal(a);
	else
		printf("请输入0至9的数字！\n");
	printf("%d \n", Sn);
	return 0;
}