#ifndef __LIST_H__
#define __LIST_H__

typedef unsigned int uint;

template<class TYPE>
class List
{
public:
	List()
	{
		start = nullptr;
	}
	~List()
	{
		delete start;
	}

	void pushFront(const TYPE& elem)
	{
		node* tmp = new node;
		tmp->value = elem;
		tmp->next = nullptr;

		if (start == nullptr)
			start = tmp;
		else
		{
			tmp->next = start;
		}
	}
	void pushBack(const TYPE& elem);
	void popFront();
	void popBack();
	void insert(uint pos, const TYPE& elem);
	void remove(uint pos);

	TYPE front() const;
	TYPE back() const;

	TYPE getValue(uint pos) const;

	bool empty() const;
	int size() const;
	void clear();

	void print() const;

private:
	struct node
	{
		TYPE value;
		node* prev;
		node* next;
	};
	node* start;

};

#endif // !__LIST_H__

