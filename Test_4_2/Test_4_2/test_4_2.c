#define _CRT_SECURE_NO_WARNINGS 1

#include"µ¥Á´±í.h"

void test_1(SingleList* sl)
{
	PushBack(sl, 4);
	PushBack(sl, 5);
	PushBack(sl, 6);
	Print(sl);
	PushFornt(sl, 3);
	PushFornt(sl, 2);
	PushFornt(sl, 1);
	Print(sl);
	PopBack(sl);
	PopBack(sl);
	PopBack(sl);
	Print(sl);
	PopFornt(sl);
	InsertAfter(sl->head, 9);
	Print(sl);


}

void test_2(SingleList* sl)
{
	for (int i = 1; i < 11; i++)
	{
		PushBack(sl, i);
	}
	InsertAfter(sl->head, 9);
	EraseAfter(sl->head->next);
	Print(sl);
	Destroy(sl);
	for (int i = 20; i < 31; i++)
	{
		PushBack(sl, i);
	}
	Print(sl);
}

int main()
{
	SingleList sl;
	SingleListInit(&sl);
	//test_1(&sl);
	test_2(&sl);
	return 0;
}