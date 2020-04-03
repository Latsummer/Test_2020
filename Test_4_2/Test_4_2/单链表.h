#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

typedef struct SingleList
{
	Node* head;
}SingleList;

void SingleListInit(SingleList* sl);

Node* CreatNew(int data);

void Print(SingleList* sl);

void PushBack(SingleList* sl, int data);

void PushFornt(SingleList* sl, int data);

void PopBack(SingleList* sl);

void PopFornt(SingleList* sl);

void InsertAfter(Node* pos, int data);

void EraseAfter(Node* pos);

void Destroy(SingleList* sl);