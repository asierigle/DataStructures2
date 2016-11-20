#ifndef __STACK_H__
#define __STACK_H__	

#include <iostream>

template<class TYPE>
class Stack
{
public:
	Stack(int maxElems) : maxElems(maxElems)
	{
		idTopElem = -1;
		stackElems = new TYPE* stackElems[maxElems];
	}
	~Stack();

	void Push(const TYPE& item);
	void Pop();
	TYPE Top() const;

	bool empty() const;
	int size() const;

	void print() const;

private:
	TYPE* stackElems;
	int maxElems;
	int idTopElem;
};



#endif // !__STACK_H__
