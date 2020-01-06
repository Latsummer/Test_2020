#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int num = 0;
//		int sum = 0;
//		int n = 1;
//		num = i;
//		while (num / 10)
//		{
//			n++;
//			num = num / 10;
//		}
//		num = i;
//		while (num)
//		{
//			sum = sum + pow(num % 10, n);
//			num = num / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//int cal(int a)
//{
//	int i = 0;
//	int sum = 0;
//	int sn = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += a*pow(10, i);
//		sn += sum;
//	}
//	return sn;
//}
//
//int main()
//{
//	int Sn = 0;
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 0 && a < 10)
//		Sn = cal(a);
//	else
//	   printf("请输入0至9的数字！\n");
//	printf("%d \n", Sn);
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] =
//	{ 
//		{ 9801, "zhang", 20 },
//	    { 9802, "wang", 19 },
//	    { 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}


//int main()
//{
//	int qs = 0;//汽水
//	int kp = 0;//空瓶
//	int yuan = 0;//钱
//	int num = 0;
//	while (yuan <= 0)
//	{
//		printf("输入钱数：>   ");
//		scanf("%d", &yuan);
//	}
//	qs = 1 * yuan;
//	while (qs > 0)
//	{
//		num += qs;
//		kp = qs;
//		qs = 0;
//		qs = kp / 2;
//	}
//	printf("%d\n", num);
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}
