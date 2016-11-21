#ifndef __STACK_H__
#define __STACK_H__	


template<class TYPE>
class Stack
{
public:
	Stack(int maxElems) : maxElems(maxElems)
	{
		idTopElem = -1;
		stackElems = new TYPE [maxElems];
	}
	~Stack()
	{
		delete stackElems;
	}

	void Push(const TYPE& item)
	{
		idTopElem = idTopElem + 1;
		stackElems[idTopElem] = item;
	}
	void Pop()
	{
		if (idTopElem == -1)
			cout << "There is nothing to pop" << endl;
		else
			idTopElem = idTopElem - 1;
	}
	TYPE Top() const
	{
		return stackElems[idTopElem];
	}

	bool empty() const
	{
		return idTopElem == -1;
	}
	int size() const
	{
		return idTopElem + 1;
	}

	void print() const
	{
		if (idTopElem == -1)
		{
			cout << "There are no elements to print" << endl;
		}
		else
		{
			for (int i = 0; i <= idTopElem; i++)
			{
				cout << "The " << i << " element is: " << endl;
				cout << stackElems[i] << endl;
			}
		}
	}

private:
	TYPE* stackElems;
	int maxElems;
	int idTopElem;
};



#endif // !__STACK_H__
