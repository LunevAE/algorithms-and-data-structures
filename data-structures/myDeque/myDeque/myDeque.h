#pragma once

class myDeque
{
private:
	struct node
	{
		int value;
		node *next;
		node *prev;
	};
	node *head, *tail;
	int count = 0;
public:
	myDeque() { head = tail = nullptr; }
	void push_front(int value);
	void push_back(int value);
	void pop_front();
	void pop_back();
	void front();
	void back();
	bool isEmpty();
	void clear();
	void size();
	void exit();
	~myDeque();
};

