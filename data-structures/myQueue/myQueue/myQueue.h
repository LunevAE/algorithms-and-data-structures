#pragma once

class myQueue
{
private:
public:
	struct node
	{
		int value;
		int size = 0;
		node *next;
	};

	node *head, *tail;
public:
	myQueue() { head = tail = nullptr; }
	void push(int value);
	void pop();
	void front();
	bool isEmpty();
	void clear();
	void size();
	void exit();
	~myQueue();
};

