// Welcome to Programming Minds
// Implementation of stack using C++ Programming language
// Operations - push(), pop(), isEmpty(), isFull(), peek(), displayStack()

#include<iostream>
using namespace std;

class Stack
{
private:
	int top, array[5];

public:
	Stack()
	{
		top = -1;

		for (int i = 0; i < 5; i++)
		{
			array[i] = 0;
		}

	}

	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;

		}
	}

	bool isFull()
	{
		if (top == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void push(int val)
	{
		if (isFull())
		{
			cout << "Stack is already full, we can not add new element..." << endl;

		}
		else
		{
			top++;
			array[top] = val;
			cout << "New element added at top of the stack.." << endl;
		}
	}

	void pop()
	{
		if (isEmpty())
		{
			cout << "Stack is already empty, we can not remove anything..." << endl;
		}
		else
		{
			array[top] = 0;
			cout << "Removed item from the top of stack..." << endl;
			top--;
		}
	}

	void peek()
	{
		if (isEmpty())
		{
			cout << "No element to show in stack..." << endl;
		}
		else
		{
			cout << "Element at the top of stack is " << array[top] << endl;
		}
	}

	void count()
	{
		if (isEmpty())
		{
			cout << "There are no element in the stack" << endl;
		}
		else
		{
			cout << "Total number of elements in the stack are " << top + 1 << endl;
		}
	}

	void displayStack()
	{
		if (isEmpty())
		{
			cout << "No element to show in stack..." << endl;
		}
		else
		{
			cout << "Following are the element in the stack" << endl;

			for (int i = top; i >= 0; i--)
			{
				cout << array[i] << endl;
			}
		}
	}
};

int main()
{
	Stack stack;

	stack.displayStack();

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	stack.displayStack();
	cout << endl;

	stack.pop();
	stack.displayStack();
	cout << endl;

	stack.peek();
	stack.count();


	
	
	return 0;

}


