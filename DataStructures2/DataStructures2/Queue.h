#ifndef __QUEUE_H__
#define __QUEUE_H__	


template<class TYPE>
class Queue
{
public:
	Queue(int maxElems) : maxElems(maxElems)
	{
		idEndElem = -1;
		queueElems = new TYPE[maxElems];
	}
	~Stack()
	{
		delete queueElems;
	}

	void enqueue(const TYPE& elem)
	{
		idEndElem = idEndElem + 1;
		queueElems[idEndElem] = elem;
	}
	TYPE dequeue()
	{
		TYPE tmp = queueElems[0];
		for (int i = 0; i < idEndElem; i++)
		{
			queueElems[i] = queueElems[i + 1];
		}
		idEndElem = idEndElem - 1;
		return tmp;
	}

	bool empty() const
	{
		return idEndElem == -1;
	}
	int size() const
	{
		return idEndElem + 1;
	}

	void print() const
	{
		if (idEndElem == -1)
		{
			cout << "There are no elements to print" << endl;
		}
		else
		{
			for (int i = 0; i <= idEndElem; i++)
			{
				cout << "The " << i << " element is: " << endl;
				cout << queueElems[i] << endl;
			}
		}
	}

private:
	TYPE* queueElems;
	int maxElems;
	int idEndElem;
};



#endif // !__QUEUE_H__
