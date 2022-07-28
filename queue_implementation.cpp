// Welcome to Programming Minds
//
/*  Implementation of queue using C++

	Queue data structure - First In First Out(FIFO) and Last In Last Out(LILO)
	Enqueue Operation - To add new element in queue
	Dequeue Operation - To remove element from queue
	IsEmpty Operation - To check if queue is empty or not
	IsFull Operation - To check if queue is full or not
	Peek operation - To access element at front

*/

#include<iostream>
using namespace std;

class Queue
{
private:
	int array[5], front, rear;

public:
	Queue()
	{
		front = -1;
		rear = -1;

		for (int i = 0; i < 5; i++)
		{
			array[i] = 0;
		}
	}

	bool isEmpty()
	{
		if (front == -1 && rear == -1)
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
		if (rear == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Enqueue(int val)
	{
		if (isFull())
		{
			cout << "Queue is full, can not add new element..." << endl;
		}
		else if (isEmpty())
		{
			rear = 0;
			front = 0;
			array[front] = val;
			cout << "Element added at the front of queue..." << endl;

		}
		else
		{
			rear++;
			array[rear] = val;
			cout << "Element added at the end of queue..." << endl;
		}
	}

	void Dequeue()
	{
		if (isEmpty())
		{
			cout << "Queue is already empty, we can not remove anything..." << endl;
		}
		else if (front == 0 && rear == 0)
		{
			array[front] = 0;
			front = -1;
			rear = -1;
			cout << "Removed element from the queue" << endl;
		}
		else
		{
			array[front] = 0;
			cout << "Element removed from front" << endl;
			front++;
		}
	}

	void peek()
	{
		if (isEmpty())
		{
			cout << "Queue is empty, nothing to access..." << endl;
		}
		else
		{
			cout << "Element at front of queue: " << array[front] << endl;
		}
	}

	void displayQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty, nothing to print..." << endl;
		}
		else
		{
			cout << "Elelements of the queue are: ";

			for (int i = rear; i >= 0; i--)
			{
				cout << array[i] << ", ";
			}

			cout << endl;
		}
	}
};

int main()
{
	Queue queue;

	queue.displayQueue();
	cout << endl;

	queue.Enqueue(10);
	queue.Enqueue(20);
	queue.Enqueue(30);
	queue.Enqueue(40);
	queue.Enqueue(50);
	cout << endl;

	queue.displayQueue();
	cout << endl;

	queue.Dequeue();
	queue.displayQueue();
	cout << endl;

	queue.peek();
	cout << endl;

	return 0;
}

