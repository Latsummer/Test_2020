#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <iostream>
//using namespace std;
namespace bite//�����ռ�Ϊbite
{
  void print(int a)
  {
    printf(" %d \n", a);
  }
  int a;
  int b;//�ɶ��������Ҳ�ɶ��庯��
  
  namespace bite_69//����Ƕ��
  {
	  int a;
	  int b;
    void fun1(int a)
    {
      printf("%d\n", a);
    }
  }
}

namespace bite//���Էֶ�д������������һ��
{
  int c;
  int d;
  void fun2()
  {
    printf("hehe\n");
  }
  void fun3()
  {
	  printf("haha\n");
  }
}
using bite::fun3;
void test()
{
	bite::a = 1;
	bite::print(bite::a);
	bite::bite_69::a = 2;
	bite::c = 3;
	bite::fun2();
	fun3();
}

void test1()
{
	int a = 10;
	int b;
	std::cout << a << "\n";
	std::cin  >> b;
	std::cout << b << "\n";
	char str[] = "wocaowuqing";
	char* p = str;
	std::cout << str << std::endl;
	std::cout << p << std::endl;

}


void test2(int a = 3, int b = 2, int c = 1)
{
	std::cout << a << b  << c << std::endl;
}

int Add(int a, int b)
{
	return a + b;
}

float Add(float a, float b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

int Add(char a, int b)
{
	return a + b;
}

int Add(int a, char b)
{
	return a + b;
}

void test3()
{
	std::cout << Add((float)1.5, (float)1.6) << std::endl;
}

void swap(int& ra, int& rb)
{
	int tmp = ra;
	ra = rb;
	rb = tmp;
}

int& Add2(int& ra)
{
	return ++ra;
}

void test4()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::cout << a << b << std::endl;
	int& c = Add2(a);
	std::cout << a << b << std::endl;
}

int main()
{
	//test();
	//test1();
	//test2(1, 2, 3);
	//test2();
	//test3();
	test4();
	return 0;
}
