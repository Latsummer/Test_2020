#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//int My_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		printf("¿ÕÖ¸Õë£¡\n");
//		return 0;
//	}
//	int num = 0;
//	int x = 1;
//	while (*str != '\0')
//	{
//		if (*str == '-')
//			x = -1;
//		while (*str >= '0' && *str <= '9')
//		{
//			num = num * 10 + (*str - '0');
//			str++;
//		}
//		str++;
//	}
//	return (x * num);
//}
//
//int main()
//{
//	char str[1024] = { 0 };
//	scanf("%s", &str);
//	int num = My_atoi(str);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	char str[1024] = { 0 };
//	scanf("%s", &str);
//	int num = atoi(str);
//	printf("%d\n", num);
//	return 0;
//}

//char* My_strncat(char* dest, const char* src, size_t n)
//{
//	size_t end = 0;
//	while (dest[end] != '\0')
//	{
//		end++;
//	}
//	for (size_t i = 0; i < n; i++)
//	{
//		dest[end] = src[i];
//		end++;
//	}
//	dest[end] = '\0';
//	return dest;
//
//}
//
//int main()
//{
//	char str1[128] = { 0 };
//	char str2[128] = { 0 };
//	int n = 0;
//
//	scanf("%s", str1);
//	scanf("%s", str2);
//	scanf("%d", &n);
//	printf("%s\n", str1);
//
//	My_strncat(str1, str2, n);
//
//	printf("%s\n", str1);
//
//	return 0;
//}

//char* My_strncpy(char* dest, const char* src, size_t n)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		dest[i] = src[i];
//	}
//	return dest;
//}
//
//int main()
//{
//	char str1[128] = { 0 };
//	char str2[128] = { 0 };
//	int n = 0;
//
//	scanf("%s", str1);
//	scanf("%s", str2);
//	scanf("%d", &n);
//	printf("%s\n", str1);
//
//	My_strncpy(str1, str2, n);
//	printf("%s\n", str1);
//
//	return 0;
//}

void Find_num(int* arr, int* num)
{
	int num_i = 0;
	for (int i = 0; i < 20; i++)
	{   
		int two = 0;
		for (int j = 0; j < 20; j++)
		{
			if (arr[i] == arr[j])
				two++;
			if (two == 2)
				break;
		}
		if (two == 1)
		{
			num[num_i++] = arr[i];
		}
	}
}

int main()
{
	int arr[20] = { 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 9, 9, 10, 10 };
	int num[2] = { 0 };
	Find_num(arr, num);

	printf("%d, %d\n", num[0], num[1]);

	return 0;
}