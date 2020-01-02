#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void print(int* arr ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", *arr);
//		arr++;
//	}
//	printf("\n");
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在这里完成代码
//	print(arr, sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int main()
//
//{
//	/*int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//void Reverse(char* str, int sz)
//{
//	char tmp = 0;
//	int left = 0;
//	int right = sz-2 ;
//	while (left<right)
//	{
//		tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[] = "hello bit";
//	int i = 0;
//	int sz = sizeof(str);
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n\n");
//
//	Reverse(str, sz);
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n\n");
//
//	return 0;
//}

int main()
{
	int row = 0;
	int i = 0;
	int m = 0, n = 0;
	printf("输入奇数行数：>   ");
	scanf("%d", &row);
	for (i = 1; i <= (row+1)/2; i++)//前半行
	{
		/*for (m = (row+1/2)-1 ; m > 2*i-1; m-=2)
		{
			printf("#");
		}*/
		for (m = (row+1)/2 - 1; m > i - 1; m --)
		{
			printf(" ");
		}
		for (n = 0; n < 2 * i - 1; n++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= (row - 1) / 2; i++)//后半行
	{
		for (m = 1; m <= i; m++)
			printf(" ");
		for (n = 1; n <= row - 2 * i ; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}