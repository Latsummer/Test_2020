#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//int My_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0')
//	{
//		if (*str1 > *str2)
//			return 1;
//		else if (*str1 < *str2)
//			return -1;
//		else
//		{
//			str1++;
//			str2++;
//		}
//	}
//	if (*str1 > *str2)
//		return 1;
//	else if (*str1 < *str2)
//		return -1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//
//	int ret = My_strcmp(str1, str2);
//
//	if (ret == 0)
//		printf("str1 = str2\n");
//	else if (ret > 0)
//		printf("str1 > str2\n");
//	else
//		printf("str1 < str2\n");
//	return 0;
//}

//const char* My_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	const char* black = str1;
//	while(*black != '\0')
//	{
//		const char* red = black;
//		const char* sub = str2;
//		while (*red != '\0' && *sub != '\0' && (*red == *sub))
//		{
//			red++;
//			sub++;
//		}
//		if (*sub == '\0')
//			return black;
//		if (*red == '\0')
//			return NULL;
//		black++;
//	}
//	return NULL;
//}

//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//
//	const char* ret = My_strstr(str1, str2);
//	printf("%p , %p", str1, ret);
//
//	return 0;
//}

void* My_memcpy(void* dest, void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	size_t i = 0;
	void* ret = dest;
	for (i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[4] = { 0 };
 	My_memcpy(b, a, 16);
	for (int i = 0; i < 4; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}

//void* My_memmove(void* dest, void* src,size_t num)
//{
//	assert(dest != NULL && src != NULL);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	if (csrc < cdest && cdest < csrc + num)
//	{
//		char* pdest = cdest + num - 1;
//		char* psrc = csrc + num - 1;
//		for (size_t i = 0; i < num; i++)
//		{
//			*pdest = *psrc;
//			pdest--;
//			psrc++;
//		}
//
//	}
//	else
//	{
//		My_memcpy(dest, src, num);
//	}
//	return dest;
//}
//
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//	int b[4] = { 0 };
//	My_memmove(b, a, 16);
//	for (int i = 0; i < 4; i++)
//		printf("%d ", b[i]);
//	printf("\n");
//	return 0;
//}