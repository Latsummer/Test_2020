#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("#################\n");
	printf("#####1.PLAY######\n");
	printf("#####0.EXIT######\n");
	printf("#################\n");
}

void game()
{
	int gass = 0;
	int GassNum = rand() % 10;
	printf("���������֣�");
	while (1)
	{
		scanf("%d", &gass);
		if (gass == GassNum)
		{
			printf("�¶���\n");
			break;
		}
		else
		{
			printf("����\n");
		}
	}
}

int main()
{
	while (1)
	{
		srand((unsigned)time(NULL));
		menu();
		int start = 0;
		scanf("%d", &start);
		if (start == 1)
		{
			game();
		}
		else if (start == 0)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else
		{
			printf("wrong number������\n\n");
		}
	}
	return 0;
}