#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(char** arr)
//{
//	;
//}
//
//
//int main()
//{
//	char* arr[5] = { "hello", "bit" };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);//ȡ���������ַ����һ֮�����������飬ǿת��intָ�룬��߼�һ�պö�Ӧ�������һ��Ԫ��
//	int *ptr2 = (int *)(*(aa + 1));//��aa + 1��������ڶ��У������ú���ǿתintָ��ָ��5����߼�һ��Ӧ6
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	int *p = NULL;
//	int arr[10] = { 0 };
//	int(*ptr)[10] = &arr;
//	return 0;
//}

//void print(int(*arr)[5], int row, int col)
//{
//	;
//}
//
//
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//
//int cmp(const void *m, const void *n)
//{
//	return *(char *)m - *(char *)n;
//}
//void swap(char *p1, char *p2, int width)
//{
//	int i = 0;
//	char temp;
//	for (; i < width; i++)
//	{
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		*p1++;
//		*p2++;
//	}
//}
//void my_qsort(void *base, int size, int width)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 0; i < size; i++)
//	{
//		j = 0;
//		for (j = 0; j < size - i-1 ; j++)
//		{
//			ret = cmp((char*)base + j*width, (char*)base + (j + 1)*width);
//			if (ret>0)
//			{
//				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int a[] = { 5, 4, 3, 2, 1 };
//	char b[] = { 'e', 'd', 'c', 'b', 'a' };
//	//�����������͵�������ͬһ���������������ݽ���ð������
//	my_qsort(a, 5, 4);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	my_qsort(b, 5, 1);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", b[i]);
//	}
//	printf("\n");
//	return 0;
//}

int cmp(const void *m, const void *n)
{
	return(*(char*)m - *(char*)n);
}

void swap(char* p1, char* p2, int width)
{
	int i = 0;
	char tmp = 0;
	for (; i < width; i++)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		*p1++;
		*p2++;
	}
}

void my_qsort(void* base,int size,int width)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		int j = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			int ret = cmp((char*)base + j*width, (char*)base + (j + 1)*width);
			if (ret>0)
			{
				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
	
}

int main()
{
	int a[] = { 5, 4, 3, 2, 1 };
	char b[] = {'e','d','c','b','a'};
	int i = 0;
	my_qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]));
	my_qsort(b, sizeof(b) / sizeof(b[0]), sizeof(b[0]));
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(b) / sizeof(b[0]); i++)
	{
		printf("%c ", b[i]);
	}
	printf("\n");
	return 0;
}
