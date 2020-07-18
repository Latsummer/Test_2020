#include <unordered_map>
#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;

void testUMap()
{
	unordered_map<int, int> um;
	map<int, int> m;

	um.insert(make_pair(1, 1));
	um.insert(make_pair(10, 1));
	um.insert(make_pair(2, 1));
	um.insert(make_pair(15, 1));
	um.insert(make_pair(8, 1));
	
	m.insert(make_pair(1, 1));
	m.insert(make_pair(10, 1));
	m.insert(make_pair(2, 1));
	m.insert(make_pair(15, 1));
	m.insert(make_pair(8, 1));

	um[100] = 100;//����
	um[15] = 15;//�޸�

	um.at(2) = 2;//at�޷����룬key������ֱ�����쳣

	//��������
	unordered_map<int, int>::iterator uit = um.begin();
	while (uit != um.end())
	{
		cout << uit->first << "-->" << uit->second << endl;
		uit++;
	}

	uit = um.find(100);
	cout << um.count(100) << endl;
	cout << uit->first << "-->" << uit->second << endl;
	uit = um.find(20);
	cout << um.count(20) << endl;
	cout << (uit == um.end()) << endl;

	//��������
	/*map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		cout << it->first << "-->" << it->second << " ";
		it++;
	}
	cout << endl;*/
}

void testSet()
{
	unordered_set<int> us;
	set<int> s;

	us.insert(10);
	us.insert(99);
	us.insert(48);
	us.insert(27);
	us.insert(16);

	s.insert(10);
	s.insert(99);
	s.insert(48);
	s.insert(27);
	s.insert(16);

	//��������������
	unordered_set<int>::iterator uit = us.begin();
	while (uit != us.end())
	{
		cout << *uit << " ";
		uit++;
	}
	cout << endl;

	set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}


//int main()
//{
//	//testUMap();
//	testSet();
//	return 0;
//}