#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	printf("输入十个数字 :> \n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("调整后：>\n");
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			j++;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void mystrcpy(char* a1,char* a2)
//{
//	while (*a1 != '\0')
//	{
//		*a2 = *a1;
//		a1++;
//		a2++;
//	}
//}
//int main()
//{
//	char a1[] = { "abcdefg" };
//	char a2[20] = { 0 };
//	mystrcpy(a1, a2);
//	printf("%s\n", a2);
//	return 0;
//}
//int mystrlen(char* arr)
//{
//	int len = 0;
//	while (*arr != '\0')
//	{
//		len++;
//		arr++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int len = mystrlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}