#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, char** argv)
{
	Stack<int>a(4);
	a.Push(2);
	a.Push(5);
	cout << "1 means it is empty: " << a.empty() << endl;
	cout << "The size of the Stack is: " << a.size() << endl;
	a.Push(9);
	cout << "The size of the Stack is: " << a.size() << endl;
	a.print();
	a.Pop();
	a.Pop();
	a.Pop();
	cout << "1 means it is empty: " << a.empty() << endl;
	cout << "The size of the Stack is: " << a.size() << endl;
	a.print();











	system("pause");
	return 0;
}