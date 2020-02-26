#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d , %d", a + b, c);
//	unsigned int a = 0x1234;
//	//unsigned char b = *(unsigned char*)&a;
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int a[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//		a[i][0] = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%4d",a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//void main()
//{
//	int i, j, n = 0, a[17][17] = { 0 };
//	while (n<1 || n>16)
//	{
//		printf("请输入杨辉三角形的行数:");
//		scanf("%d", &n);
//	}
//	for (i = 0; i<n; i++)
//		a[i][0] = 1;       /*第一列全置为一*/
//	for (i = 1; i<n; i++)
//	for (j = 1; j <= i; j++)
//		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*每个数是上面两数之和*/
//	for (i = 0; i<n; i++)    /*输出杨辉三角*/
//	{
//		for (j = 0; j <= i; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//}

//int main()
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//			printf("killer is %c\n", killer);
//	}
//
//	return 0;
//}

void rank(int A, int B, int C, int D, int E)
{
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((B == 2) + (A == 3) == 1 &&
							(B == 2) + (E == 4) == 1 &&
							(C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 &&
							(E == 4) + (A == 1) == 1)
						{
							if (A*B*C*D*E == 120)
							{
								printf("A是第%d名\n", A);
								printf("B是第%d名\n", B);
								printf("C是第%d名\n", C);
								printf("D是第%d名\n", D);
								printf("E是第%d名\n", E);

							}
						}
					}
				}
			}
		}
	}
}

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	rank(A, B, C, D, E);
	return 0;
}