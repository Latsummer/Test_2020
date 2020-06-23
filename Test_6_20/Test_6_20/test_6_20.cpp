#define _CRT_SECURE_NO_WARNINGS
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

template <class T>
T Add(T& a, T& b)
{
	return a + b;
}

template <>
char* Add<char*>(char*& a, char*& b)
{
	strcat(a, b);
	return a;
}

void test()
{
	int a = 1, b = 2;
	float c = 1.5, d = 2.5;
	char e = 'a', f = 'b';
	char* ptr1 = new char[100];
	strcpy(ptr1, "123");
	char* ptr2 = new char[100];
	strcpy(ptr2, "abc");

	Add(a, b);
	Add(c, d);
	Add(e, f);
	Add(ptr1, ptr2);
}

template <class T, size_t N>
class Arrray
{

private:
	T _array[N];
};

void test2()
{
	ifstream fin("test.txt");
	if (!fin.is_open())
		cout << "open_error" << endl;
	char str[100];
	/*fin >> str;
	cout << str;
	*/

	fin.getline(str, 100);
	cout << str << endl;
}

void test3()
{
	ofstream fout("new.test.txt");
	if (!fout.is_open())
	{
		cout << "open_error" << endl;
		return;
	}
	fout << "123" << "456" << endl;
	fout << "abcd";
	fout.close();

	ifstream fin("new.test.txt");
	if (!fin.is_open())
	{
		cout << "open_error" << endl;
		return;
	}
	char str[100];
	fin >> str;
	cout << str << endl;
	fin >> str;
	cout << str << endl;
	fin.close();
}

struct student
{
	int _age;
	char _name[128];
};

void writeFile(const char* filename)
{
	ofstream fout(filename);
	if (!fout.is_open())
		return;
	student st;
	st._age = 20;
	strcpy(st._name, "ÕÅÈý");

	fout.write((char*)&st, sizeof(student));
	fout.close();
}
void readFile(const char* filename)
{
	ifstream fin(filename);
	if (fin.is_open())
		return;
	student st;
	fin.read((char*)&st, sizeof(student));
	fin.close();
}

int main()
{
	//test();
	//test2();
	test3();

	return 0;
}