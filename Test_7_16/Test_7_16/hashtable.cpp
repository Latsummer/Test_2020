#include <iostream>
#include <vector>
using namespace std;


enum State
{
	EMPTY,
	EXIST,
	DELETE
};

//哈希表：线性探测
template <class K, class V>
struct HashNode
{
	pair<K, V> _value;
	State _state;//数据状态

	HashNode(const pair<K, V>& value = pair<K, V>())
		: _value(value)
		, _state(EMPTY)
	{ }
};

template <class K, class V>
class HashTable
{
public:
	HashTable(size_t n = 10)
	{
		_table.resize(n);
		_size = 0;
	}

	bool insert(const pair<K, V>& value)
	{
		//1.检查容量
		checkCapacity();
		//2.计算哈希位置
		int idx = value.first % _table.size();

		//3.判断位置是否可用，以及数据是否已经存在
		while (_table[idx]._state == EXIST)
		{
			if (_table[idx]._value.first == value.first)
				return false;
			idx++;
			if (idx == _table.size())
				idx = 0;
		}

		_table[idx]._value = value;
		_table[idx]._state = EXIST;
		_size++;
		return true;
	}

	HashNode<K, V>* find(const K& key)
	{
		int idx = key % _table.size();
		while (_table[idx]._state != EMPTY)
		{
			if (_table[idx]._state == EXIST && _table[idx]._value.first == key)
				return &_table[idx];
			idx++;
			if (idx == _table.size())
				idx = 0;
		}
		return nullptr;
	}

	bool erase(const K& key)
	{
		HashNode<K, V>* p = find(key);
		if (p)
		{
			p->_state = DELETE;
			_size--;
			return true;
		}
		return false;
	}

private:

	void checkCapacity()
	{
		//超过负载因子，则进行增容
		if (_size * 10 / _table.size() >= 7)
		{
			HashTable ht(2 * _table.size());
			//旧表元素重新插入新表
			for (int i = 0; i < _table.size(); i++)
			{
				if (_table[i]._state == EXIST)
				{
					ht.insert(_table[i]._value);
				}
			}

			swap(_table, ht._table);
		}
	}

	vector<HashNode<K, V>> _table;
	//j记录实际元素的个数
	size_t _size;
};

int main()
{
	HashTable<int, int> ht;
	ht.insert(make_pair(1, 1));
	ht.insert(make_pair(11, 1));
	ht.insert(make_pair(21, 1));
	ht.insert(make_pair(2, 1));
	ht.insert(make_pair(9, 1));
	ht.insert(make_pair(19, 1));
	ht.insert(make_pair(6, 1));
	ht.insert(make_pair(3, 1));
	ht.insert(make_pair(18, 1));
	ht.insert(make_pair(72, 1));
	ht.insert(make_pair(99, 1));
	ht.insert(make_pair(56, 1));

	HashNode<int, int>* p = ht.find(72);
	cout << p->_value.first << "-->" << p->_value.second << endl;
	p = ht.find(100);
	cout << p << endl;
	ht.erase(11);
	return 0;
}