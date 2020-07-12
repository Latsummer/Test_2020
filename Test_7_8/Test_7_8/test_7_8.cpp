#include <iostream>
#include <set>
#include <map>
using namespace std;

void testSet()
{
	multiset<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(9);
	s.insert(-1);
	s.insert(18);
	s.insert(15);

	for (const auto& e : s)
		cout << e << " ";
	cout << endl;
}

void testMap()
{
	//multimap不提供[]操作符重载，at函数
	multimap<int, int> m;
	m.insert(make_pair(1, 1));
	m.insert(make_pair(10, 1));
	m.insert(make_pair(1, 1));
	m.insert(make_pair(0, 1));
	m.insert(make_pair(1, 1));

	for (const auto& e : m)
		cout << e.first << "--->" << e.second << endl;

	//pair<multimap<int, int>::iterator, multimap<int, int>::iterator> p = m.equal_range(1);
	auto p = m.equal_range(1);
	multimap<int, int>::iterator it = p.first;
	while (it != p.second)
	{
		cout << it->first << "--->" << it->second << endl;
		it++;
	}
}

//int main()
//{
//	testSet();
//}