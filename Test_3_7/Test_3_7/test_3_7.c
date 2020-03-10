#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char* My_strcat(char* a,const char* b)
{
	if (a == NULL || b == NULL)
		return NULL;
	int end = 0;
	while (a[end] != '\0')
		end++;
	int i = 0;
	while (b[i] != '\0')
	{
		a[end + i] = b[i];
		i++;
	}
	a[end + i] = '\0';
	return a;
}

int main()
{
	char a[100] = { 0 };
	char b[100] = { 0 };
	scanf("%s", &a);
	scanf("%s", &b);
	My_strcat(a, b);
	printf("%s\0", a);
	return 0;
}

//char* My_strcpy(const char* a, char* b)
//{
//	if (a == NULL || b == NULL)
//		return NULL;
//	int i = 0;
//	while (a[i] != '\0')
//	{
//		b[i] = a[i];
//		i++;
//	}
//	b[i] = '\0';
//	return b;
//}
//
//int main()
//{
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	scanf("%s", &a);
//	My_strcpy(a, b);
//
//	printf("a : %s\n", a);
//	printf("b : %s\n", b);
//
//	return 0;
//}

//int My_strlen(const char* a)
//{
//	int szie = 0;
//	while (*a != '\0')
//	{
//		a++;
//		szie++;
//	}
//	return szie;
//}
//
//int main()
//{
//	char a[25] = { 0 };
//	scanf("%s", &a);
//
//	printf("%d ¸ö×Ö·û£¨²»°üÀ¨ÐÝÖ¹·û£©\n", My_strlen(a));
//	return 0;
//}