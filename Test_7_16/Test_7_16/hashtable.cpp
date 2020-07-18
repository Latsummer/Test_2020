#include <iostream>
#include <vector>
using namespace std;


enum State
{
	EMPTY,
	EXIST,
	DELETE
};

//��ϣ������̽��
template <class K, class V>
struct HashNode
{
	pair<K, V> _value;
	State _state;//����״̬

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
		//1.�������
		checkCapacity();
		//2.�����ϣλ��
		int idx = value.first % _table.size();

		//3.�ж�λ���Ƿ���ã��Լ������Ƿ��Ѿ�����
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
		//�����������ӣ����������
		if (_size * 10 / _table.size() >= 7)
		{
			HashTable ht(2 * _table.size());
			//�ɱ�Ԫ�����²����±�
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
	//j��¼ʵ��Ԫ�صĸ���
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