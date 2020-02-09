#pragma once

class myStack
{
private:
	struct node
	{
		int value;
		int size = 0;
		node *next;
	};

	node* top;
public:
	myStack() { top = nullptr; }
	void push(int value);
	void pop();
	void back();
	void size();
	void clear();
	void exit();
	~myStack();
};

