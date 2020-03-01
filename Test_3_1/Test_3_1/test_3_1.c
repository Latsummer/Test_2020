#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int len(char str[])
//{
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//		;
//	return i;
//}
//
//int Isswp(char str1[], int s1, char str2[], int s2)
//{
//	int i = 0;
//	int j = 0;
//	int a1 = 0, a2 = 0;
//	for (i = 0; i <= s1; i++)
//	{
//		a1 += str1[i];
//	}
//	for (j = 0; j <= s2; j++)
//	{
//		a2 += str2[j];
//	}
//	if (a1 == a2)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//
//	printf("ÊäÈë×Ö·û´®1\n");
//	scanf("%s" , &str1);
//	printf("ÊäÈë×Ö·û´®2\n");
//	scanf("%s" , &str2);
//	
//	int s1 = len(str1);
//	int s2 = len(str2);
//	int swp = Isswp(str1,s1,str2,s2);
//
//	printf("%d\n", swp);
//
//
//	return 0;
//}

//void Left(char str[20], int k, int len)
//{
//	int i = 0;
//	while (k--)
//	{
//		char swp = str[0];
//		for (i = 0; i < len; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[len - 1] = swp;
//	}
//}
//
//int main()
//{
//	char str[20] = { 20 };
//	int k = 0;
//
//	printf("ÇëÊäÈë×Ö·û´®=> ");
//	scanf("%s", &str);
//	printf("ÇëÊäÈëK=> ");
//	scanf("%d", &k);
//	printf("×óĞıÇ°£º%s\n", str);
//
//	Left(str, k, strlen(str));
//
//	printf("×óĞıºó£º%s\n", str);
//
//	return 0;
//}

#define ROW 10
#define COL 10

int Find(int arr[ROW][COL], int k)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = COL - 1; j >= 0; j--)
		{
			if (arr[i][j] == k)
				return 1;
		}
	}
	return 0;

}

int main()
{
	int i = 0;
	int j = 0;
	int n = 1;
	int k = 0;
	int arr[ROW][COL] = { 0 };
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = n;
			n++;
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	printf("ÇëÊäÈëÒª²éÕÒµÄÊı×Ö£º");
    scanf("%d", &k);
	int ret = Find(arr, k);
	if (ret)
		printf("ÕÒµ½ÁË£¡\n");
	else
	{
		printf("²»´æÔÚ£¡\n");
	}

	return 0;
}