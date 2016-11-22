#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main(int argc, char** argv)
{
	cout << "-----STACK PROVE-----" << endl;
	Stack<int>a(4);
	cout << "1 means it is empty: " << a.empty() << endl;
	a.Push(2);
	a.Push(5);
	cout << "1 means it is empty: " << a.empty() << endl;
	cout << "The size of the Stack is: " << a.size() << endl;
	a.Push(9);
	cout << "The size of the Stack is: " << a.size() << endl;
	a.print();
	a.Pop();
	a.Pop();
	cout << "1 means it is empty: " << a.empty() << endl;
	cout << "The size of the Stack is: " << a.size() << endl;
	a.print();

	cout << "----QUEUE PROVE-----" << endl;
	Queue<int>b(4);
	cout << "1 means it is empty: " << b.empty() << endl;
	b.enqueue(3);
	b.enqueue(7);
	cout << "1 means it is empty: " << b.empty() << endl;
	cout << "The size of the Queue is: " << b.size() << endl;
	b.enqueue(2);
	cout << "The size of the Stack is: " << b.size() << endl;
	b.print();
	b.dequeue();
	b.dequeue();	
	cout << "1 means it is empty: " << b.empty() << endl;
	cout << "The size of the Queue is: " << b.size() << endl;
	b.print();










	system("pause");
	return 0;
}