#define _CRT_SECURE_NO_WARNINGS 1
#include"µ¥Á´±í.h"

void SingleListInit(SingleList* sl)
{
	sl->head = NULL;
}

Node* CreatNew(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void Print(SingleList* sl)
{
	Node* cur = sl->head;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void PushBack(SingleList* sl, int data)
{
	Node* newNode = CreatNew(data);
	if (sl->head == NULL)
	{
		sl->head = newNode;
	}
	else
	{
		Node* last = sl->head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = newNode;
	}
}

void PushFornt(SingleList* sl, int data)
{
	Node* newNode = CreatNew(data);
	if (sl->head == NULL)
	{
		sl->head = newNode;
	}
	else
	{
		Node* old = sl->head;
		sl->head = newNode;
		newNode->next = old;
	}
	
}

void InsertAfter(Node* pos, int data)
{
	Node* newNode = CreatNew(data);
	if (!pos)
	{
		return;
	}
	Node* afterPos = newNode;
	afterPos = pos->next;
	pos->next = newNode;
	newNode->next = afterPos;
}

void PopBack(SingleList* sl)
{
	Node* cur = sl->head;
	while (cur->next->next)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}

void PopFornt(SingleList* sl)
{
	Node* cur = sl->head;
	Node* after = cur->next;
	free(cur);
	sl->head = after;
}

void EraseAfter(Node* pos)
{
	if (!pos)
	{
		return;
	}
	Node* del = pos->next;
	Node* after_del = del->next;
	free(del);
	pos->next = after_del;
}

void Destroy(SingleList* sl)
{
	Node* des = sl->head;
	while (des)
	{
		Node* next = des->next;
		free(des);
		des = next;
	}
	sl->head = NULL;
}