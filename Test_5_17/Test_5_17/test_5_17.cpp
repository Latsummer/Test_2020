#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<time.h>
using namespace std;

//struct A
//{
//	int arr[10000];
//};
//
//void fun1(A a)
//{
//
//}
//
//void fun2(A& a)
//{
//
//}
//
//void test1()
//{
//	A a;
//	int n = 10000;
//	size_t begin = clock();
//	for (int i = 0; i < n; i++)
//		fun1(a);
//	size_t end = clock();
//	cout << "fun1£º" << end - begin << endl;
//	
//	begin = clock();
//	for (int i = 0; i < n; i++)
//		fun2(a);
//	end = clock();
//	cout << "fun2£º" << end - begin << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//#define ADD(a, b) a + b
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//void test()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//}
//
//void test2()
//{
//	int a = 1;
//	int b = 2;
//	int c = ADD(a, b);
//}

int main()
{
	//test();
	int arr[] = { 10, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i : arr)
		cout << i << " ";
	cout << endl;
	return 0;
}