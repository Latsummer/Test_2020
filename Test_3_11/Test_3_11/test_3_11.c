#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//int My_strlen(char* str)
//{
//	int size = 0;
//	while (*str != '\0')
//	{
//		size++;
//		str++;
//	}
//	return size;
//}
//
//int main()
//{
//	char str[] = "123456789";
//	printf("%d\n", My_strlen(str));
//	return 0;
//}

//char* My_strcpy(char* dest, char* src)
//{
//	if (dest == NULL || src == NULL)
//		return NULL;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return dest;
//}
//
//int main()
//{
//	char str1[] = "abbbcde";
//	char str2[20] = { 0 };
//	My_strcpy(str2, str1);
//	printf("str2 = %s\n", str2);
//	return 0;
//}

//char* My_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	int end = 0;
//	while (dest[end] != '\0')
//		end++;
//	while (*src != '\0')
//	{
//		dest[end] = *src;
//		end++;
//		src++;
//	}
//	return dest;
//}
//
//int main()
//{
//	char str1[10] = "abcd";
//	char str2[10] = "ABCDE";
//	My_strcat(str1, str2);
//	printf("after cat ,str1 = %s\n", str1);
//	return 0;
//}

//int My_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0')
//	{
//		if (*str1 > *str2)
//			return 1;
//		if (*str1 < *str2)
//			return -1;
//		else
//		{
//			str1++;
//			str2++;
//		}
//	}
//	if (*str1 > *str2)
//		return 1;
//	if (*str1 < *str2)
//		return -1;
//	else
//		return 0;
//	
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//
//	int ret = My_strcmp(str1,str2);
//
//	if (ret > 0)
//		printf("str1 > str2\n");
//	else if (ret < 0)
//		printf("str1 < str2\n");
//	else
//		printf("st1 == str2\n");
//
//	return 0;
//}
//
//const char* My_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	const char* black = str1;
//	while (*black != '\0')
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
//
//int main()
//{
//	char str1[10] = "ABCDEFG";
//	char str2[10] = "EF";
//	const char* ret = My_strstr(str1, str2);
//	printf("%p  %p", str1, ret);
//	return 0;
//}

//const char* My_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);//�Ϸ��Լ��
//	if (*str2 == '\0')//���str2Ϊ���ַ�������ֱ�ӷ���NULL
//	{
//		return NULL;
//	}
//	const char* black = str1;
//	while (*black != '\0')//����str1
//	{
//		const char* red = black;
//		const char* sub = str2;
//		while (*red != '\0' && *sub != '\0' && (*red == *sub))
//		{//��blakcָ���λ��������
//			//������str1��str2��û�н�������red��subָ���Ԫ����ͬ������ѭ��
//			red++;
//			sub++;
//		}
//		//��ʱ���������
//		//1.subָ������ֹ��
//		if (*sub == '\0')//str2�Ѿ������ˣ���˵��str2һ����str1���Ӵ�
//			return black;
//		//�˴����ж�subҲ���п�����
//		//�������ַ���ͬʱ����������ƥ��ɹ�
//		//��ô���ж�red��ֱ�ӷ���NULL
//		//2.redָ������ֹ��
//		if (*red == '\0')//str1�Ѿ������ˣ���˵��str2һ������str1���Ӵ�
//			return NULL;
//		//3.������red��subָ���Ԫ�ز�ͬ
//		black++;//str1��str2��û�н��������Ⱥ���
//	}
//	return NULL;
//}
//
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

void* My_memmove(void* dest, void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	if (csrc < cdest && cdest < csrc + num)
	{
		char* pdest = cdest + num - 1;
		char* psrc = csrc + num - 1;
		for (size_t i = 0; i < num; i++)
		{
			*pdest = *psrc;
			pdest--;
			psrc--;
		}
	}
	else
	{
		My_memcpy(dest, src, num);
	}
	return dest;

}


int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int b[10] = { 0 };
	My_memmove(b, a, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
